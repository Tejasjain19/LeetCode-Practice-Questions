class Solution {
public:
    
    int soln(int ind , vector<int>& nums , vector<int> &dp)
    {
        if(ind==0)
            return nums[0];
        
        if(ind<0)
            return 0;
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        int pick = nums[ind] + soln(ind-2,nums,dp);
        int notpick = soln(ind-1,nums,dp);
        
        
        return dp[ind]=max(pick,notpick);
        
    }
    
    
    
    
    
    int rob(vector<int>& nums) 
    {   
        int n = nums.size();
        vector<int> dp(n,-1);
        return soln(n-1,nums,dp);
    }
};