class Solution {
public:
  int dp[301];
   int solve(int index , string s ,  set<string> &st )
    {
        
        if(index==s.size())
            return 1;
        
        string temp;
        
       if(dp[index]!=-1)
           return dp[index];
        
        for(int j = index; j<s.size(); j++)
        {
            
            temp+=s[j];
            
            if(st.find(temp)!=st.end())
            {
                if(solve(j+1 , s , st))
                    return dp[index]=1;
            }
            
        }
        
        
        return dp[index]=0;
        
    }
    
    
    bool wordBreak(string s, vector<string>& wordDict) {
    
        set<string> st;
        
        for(auto it : wordDict)
        {
            st.insert(it);
        }
        
        memset(dp,-1,sizeof(dp));
       return solve(0 , s , st);
        
    }
};