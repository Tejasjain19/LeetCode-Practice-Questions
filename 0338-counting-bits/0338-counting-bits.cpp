class Solution {
public:
    vector<int> countBits(int n) 
    {
        
        vector<int> temp(n+1);
        
        
        for(int i=0; i<=n; i++)
        {
            
            int ans = __builtin_popcount(i);
            
            temp[i]=ans;
            
            
        }
        
        return temp;
        
    }
};