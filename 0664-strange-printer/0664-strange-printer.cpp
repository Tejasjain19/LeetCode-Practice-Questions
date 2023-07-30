class Solution {
public:
    
    int solve(int i , int j , string &s ,   vector<vector<int>> &dp)
    {
        if(i==j)
            return 1;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int minturns=INT_MAX;
        
        for(int k=i; k<j; k++)
        {
            
            minturns=min(minturns , solve(i,k,s,dp)+solve(k+1,j,s,dp));
            
            
        }
        
        if(s[i]==s[j])
            return dp[i][j]=minturns-1;
        
        
        return dp[i][j]=minturns;
        
    }
    
    
    
    int strangePrinter(string s) {
    
        int n=s.size();
        
        vector<vector<int>> dp(n,vector<int>(n,-1));
        
        
       return solve(0,n-1,s,dp);
        
        
    }
};