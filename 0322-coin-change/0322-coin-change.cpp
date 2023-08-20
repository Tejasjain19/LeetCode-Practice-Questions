class Solution {
public:
    
    
    int solve(int i , vector<int>& coins , int T ,   vector<vector<int>> &dp)
    {
        
        if(i==0)
        {
    
            if(T % coins[0]==0)
            {
               return T/coins[0];
             }
  
        else
        {
            return INT_MAX-1;
        }
            
        }     
        
        if(dp[i][T]!=-1)
            return dp[i][T];
            
        
        int nottake = solve(i-1,coins,T,dp);
        
        int take =INT_MAX;
        
        if(coins[i]<=T)
          take = 1+solve(i,coins,T-coins[i],dp);  
            
        return dp[i][T]=min(take,nottake);
        
    }
    

    int coinChange(vector<int>& coins, int amount) {
    
        
        int n=coins.size();
        
         vector<vector<int>> dp(n, vector<int>(amount+1,-1));
        
        int ans = solve(n-1,coins,amount,dp);
        
        if(ans==INT_MAX || ans==INT_MAX-1)
            return -1;
        
        return ans;
        
    }
};