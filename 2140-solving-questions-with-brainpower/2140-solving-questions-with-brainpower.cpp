class Solution {
public:
    long long mostPoints(vector<vector<int>>&nums) 
    {
        int n=nums.size();
        long long dp[n+2];
        memset(dp,0,sizeof(dp));
        for(int i=n-1;i>=0;i--)
        {
            dp[i]=max(dp[i+1]+0ll,nums[i][0]+dp[min(n+1,i+nums[i][1]+1)]+0ll);
        }
        return dp[0];
    }
};