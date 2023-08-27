class Solution {
public:
    int minimumSum(int n, int target) {
        
      int ans = 0 ;
        
      int i=1;
        
      unordered_set<int> s;
        
        
        while(s.size()<n)
        {
            if(s.find(target-i)==s.end())
            {
              s.insert(i);    
                ans+=i;
            }
            i++;
        }
        
        return ans;
        
    }
};