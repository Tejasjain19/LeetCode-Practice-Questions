class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) 
    {
     int n=weights.size();
        
        if(k==1 || n==k)
            return 0;
        
        
        vector<long long> ans;
        
       
        
        for(int i=1 ; i<n; i++)
        {
            ans.push_back(weights[i-1]+weights[i]);
        }
        
        sort(ans.begin() , ans.end());
        
        long long l=0,r=0;
        for(int i=0; i<k-1 ; i++)
        {
            l+=ans[i];
            r+=ans[n-2-i];
        }
        
        
      return (r-l);  
        
        
        
        
        
    }
};