class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
    int n=gain.size();
        
        
        int prefix[n];
        
        prefix[0]=gain[0];
        
        for(int i=1; i<gain.size(); i++)
        {
            prefix[i]=prefix[i-1]+gain[i];
            
        }
        
        
        sort(prefix,prefix+n);
        
        
        int ans=max(0,prefix[n-1]);
        
        
        return ans;
        
    }
};