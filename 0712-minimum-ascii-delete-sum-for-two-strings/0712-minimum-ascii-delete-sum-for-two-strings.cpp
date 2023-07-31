class Solution {
public:
    
    int solve(string &s1 , string &s2 , int i , int j ,  vector<vector<int>> &dp)
    {
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        
      int cost = 0;
        
       if(i==s1.size() && j==s2.size())
       {
           cost=0;
       }
        
      else if(i==s1.size())
      {
          cost+=solve(s1,s2,i,j+1,dp)+s2[j];
      }
        
      else if(j==s2.size())
      {
          cost+=solve(s1,s2,i+1,j,dp)+s1[i];
      }
        
        
     else if(s1[i]==s2[j])
     {
         cost+=solve(s1,s2,i+1,j+1,dp);
     }
        
      else
      {
          cost+=min(solve(s1,s2,i+1,j,dp)+s1[i],solve(s1,s2,i,j+1,dp)+s2[j]);
      }
         
      return dp[i][j]=cost;  
    }
    
    
    
    
    
    
    
    
    
    
    int minimumDeleteSum(string s1, string s2) {
    
        int n = 1002;
        
        vector<vector<int>> dp(n,vector<int>(n,-1));
        
        return solve(s1,s2,0,0,dp);
        
        
    }
};