class Solution {
public:
    vector<int> countBits(int n) 
    {
        
        vector<int> temp;
        
        
        for(int i=0; i<=n; i++)
        {
            
            int ans = __builtin_popcount(i);
            
            temp.push_back(ans);
            
            
        }
        
        return temp;
        
    }
};