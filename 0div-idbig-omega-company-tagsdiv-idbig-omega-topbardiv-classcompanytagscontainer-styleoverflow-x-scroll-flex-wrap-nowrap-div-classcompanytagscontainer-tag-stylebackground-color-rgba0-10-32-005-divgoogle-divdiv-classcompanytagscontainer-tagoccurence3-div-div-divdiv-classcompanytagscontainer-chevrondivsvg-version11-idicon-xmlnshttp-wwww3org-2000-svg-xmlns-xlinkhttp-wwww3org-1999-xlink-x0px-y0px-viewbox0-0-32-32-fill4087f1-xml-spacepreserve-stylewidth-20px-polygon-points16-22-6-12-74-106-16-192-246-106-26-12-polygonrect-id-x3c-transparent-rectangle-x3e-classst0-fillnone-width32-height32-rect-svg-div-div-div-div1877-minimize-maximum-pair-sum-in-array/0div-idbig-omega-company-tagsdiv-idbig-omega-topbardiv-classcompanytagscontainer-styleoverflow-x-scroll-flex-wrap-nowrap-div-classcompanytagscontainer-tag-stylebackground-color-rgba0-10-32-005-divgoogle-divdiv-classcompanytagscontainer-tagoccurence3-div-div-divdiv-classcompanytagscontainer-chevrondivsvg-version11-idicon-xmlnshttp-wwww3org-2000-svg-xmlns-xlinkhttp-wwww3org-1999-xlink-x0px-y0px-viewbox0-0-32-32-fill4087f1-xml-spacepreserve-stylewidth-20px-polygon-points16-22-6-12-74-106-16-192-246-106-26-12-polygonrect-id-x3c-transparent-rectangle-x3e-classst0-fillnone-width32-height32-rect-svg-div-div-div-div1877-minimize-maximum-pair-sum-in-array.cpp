class Solution {
public:
    int minPairSum(vector<int>& nums)
    {
        int ans=INT_MIN;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<n; i++)
        {
            int sum=0;
            
            sum+=nums[n-1-i]+nums[i];
            
            ans=max(ans,sum);
            
        }
        
        
        
        
        return ans;
        
        
        
        
    }
};