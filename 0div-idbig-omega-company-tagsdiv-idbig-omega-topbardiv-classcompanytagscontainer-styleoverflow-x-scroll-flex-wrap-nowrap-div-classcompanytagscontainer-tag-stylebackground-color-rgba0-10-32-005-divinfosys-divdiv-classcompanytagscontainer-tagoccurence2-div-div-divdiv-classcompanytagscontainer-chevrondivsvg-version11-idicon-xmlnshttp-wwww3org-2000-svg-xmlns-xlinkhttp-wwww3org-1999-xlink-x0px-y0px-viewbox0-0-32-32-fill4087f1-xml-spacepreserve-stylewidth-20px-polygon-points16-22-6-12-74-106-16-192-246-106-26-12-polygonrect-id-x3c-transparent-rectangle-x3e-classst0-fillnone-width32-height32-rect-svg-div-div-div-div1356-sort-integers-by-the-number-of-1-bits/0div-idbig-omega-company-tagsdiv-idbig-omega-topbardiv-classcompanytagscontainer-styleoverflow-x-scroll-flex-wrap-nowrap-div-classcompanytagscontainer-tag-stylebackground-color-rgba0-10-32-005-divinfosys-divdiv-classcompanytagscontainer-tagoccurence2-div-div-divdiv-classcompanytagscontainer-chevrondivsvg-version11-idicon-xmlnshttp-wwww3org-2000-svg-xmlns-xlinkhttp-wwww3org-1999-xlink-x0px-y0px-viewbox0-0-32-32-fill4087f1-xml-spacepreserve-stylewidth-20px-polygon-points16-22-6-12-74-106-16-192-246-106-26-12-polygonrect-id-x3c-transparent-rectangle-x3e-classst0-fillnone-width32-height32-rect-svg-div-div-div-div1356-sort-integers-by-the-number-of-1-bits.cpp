class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) 
    {
    
        vector<pair<int,int>> vp;
        
        vector<int> ans;
        
        int n = arr.size();
        
        for(int i=0; i<n; i++)
        {
            
            int c1 = __builtin_popcount(arr[i]);
            
            
            vp.push_back({c1, arr[i]});
            
            
            
        }
        
        
        sort(vp.begin(),vp.end());
        
        
        for(auto it : vp)
        {
            ans.push_back(it.second);
        }
        
        
        
        
        return ans;
        
        
        
        
    }
};