class Solution {
public:
   
    
    
    int lcs(int i , int j , string &p , string &q ,vector<vector<int>> &dp)
    {
        if(i<0 || j<0)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
         if(p[i]==q[j])
             return dp[i][j]=1+lcs(i-1,j-1,p,q,dp);
        
        return dp[i][j]=max(lcs(i-1 , j , p , q ,dp) , lcs(i,j-1,p,q,dp));
    }
    
    
    
    
    int longestCommonSubsequence(string s, string t) {
       
        int n=s.size();
        int m=t.size();
        
        
        vector<vector<int>> dp(n,vector<int>(m,-1));
        
        return lcs(n-1,m-1,s,t,dp);
    }
};