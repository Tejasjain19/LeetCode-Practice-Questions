class Solution {
public:
    
   int solve(int i , unordered_set<string> &st , string &s , vector<int> &dp   )
    {
        if(i==s.size())
            return 1;
          
       if(dp[i]!=-1)
           return dp[i];
       
       
       string temp="";
        
        for(int j=i; j<s.size(); j++)
        {
            temp+=s[j];
            
            if(st.find(temp)!=st.end())
            {
                if(solve(j+1,st,s,dp))
                    return dp[i]=1;
            }
        }
        
        return dp[i]=0;
        
    }
    
    
    bool wordBreak(string s, vector<string>& wordDict) {
    
        unordered_set<string> st;
        
        vector<int> dp(s.size(),-1);
        
        
        for(auto it : wordDict)
        {
            st.insert(it);
        }
        
        
        return solve(0 , st, s ,dp);
        
        
    }
};