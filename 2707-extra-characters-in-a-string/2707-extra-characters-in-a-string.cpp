class Solution {
public:
    
    
     int solve(int i , unordered_set<string> &st , string &s , vector<int> &dp   )
    {
        if(i==s.size())
            return 0;
          
       if(dp[i]!=-1)
           return dp[i];
       
       
       string temp="";
         int cnt=0;
         
       int ans = s.size();  
        
        for(int j=i; j<s.size(); j++)
        {
            temp+=s[j];
            
            if(st.find(temp)!=st.end())
            {
                cnt = 0 + solve(j+1,st,s,dp);
            }
            else
            {
                cnt = temp.size() + solve(j+1,st,s,dp);
            }
            ans=min(ans,cnt);
        }
        
        return dp[i]=ans;
        
    }
    
    
    
    
    int minExtraChar(string s, vector<string>& dictionary) {
          unordered_set<string> st;
        
        vector<int> dp(s.size(),-1);
        
        
        for(auto it : dictionary)
        {
            st.insert(it);
        }
        
        
        return solve(0 , st, s ,dp);
        
    }
};