class Solution {
public:
    int minimumSum(int n, int target) {
        
         int ans = 0;
        
        if(n==1 && target==1)
            return 1;
        
        unordered_set<int> s;
        
        
        for(int i = 1; s.size()<n ; i++)
        {
            
            if(s.find(target - i) == s.end())
            {
                ans+=i;
                s.insert(i);
            }
            
            
        }
        
        return ans;
        
        
        
    }
};