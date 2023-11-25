class Solution 
{
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) 
    {
        int prefixsum = 0, n = nums.size(),suffixsum =0;
        for(int i=0;i<n;i++) 
        {
            suffixsum+=nums[i];
        }
        
        
        for (int i = 0; i < n; i++) 
        {
            suffixsum -= nums[i];
            prefixsum += nums[i];
            nums[i] = suffixsum - (nums[i] * (n - i - 1)) + nums[i] * (i + 1)- prefixsum;
        }
        return nums;
    }
};