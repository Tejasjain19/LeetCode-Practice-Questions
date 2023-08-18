class Solution {
public:
    
    int solve(int prev_idx , int idx , vector<int>& nums , int n , vector<vector<int>> &dp )
    {
        // base case
        
        if(idx==n)
            return 0;
        
        if(dp[idx][prev_idx+1]!=-1)
            return dp[idx][prev_idx+1];
        
        
        int len = 0 + solve(prev_idx , idx + 1 , nums , n , dp);  // not take
        
        if(prev_idx==-1 || nums[idx]>nums[prev_idx])
         len = max(len , 1 + solve(idx , idx+1 , nums , n , dp));   // take 
        
        return dp[idx][prev_idx+1]=len;
        
    }

    
    
    int lengthOfLIS(vector<int>& nums) {
    
        int n=nums.size();
        
        vector<vector<int>> dp(n , vector<int>(n+1,-1));
        
        return solve(-1 , 0 , nums , n , dp);
    }
};