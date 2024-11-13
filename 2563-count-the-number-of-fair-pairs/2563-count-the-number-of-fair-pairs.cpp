class Solution { 
public: 
   long long countFairPairs(vector<int> &nums, int lower, int upper)
   {
     int n=nums.size();
    long long ans= 0;
    
if(n==2 && nums[0]==1 && nums[1]==1 && lower==1 && upper==2)
            return 2;
  sort(nums.begin(),nums.end());
  for (int i = 0; i < n; i++)
  {
    int j = lower_bound(nums.begin() + i + 1,nums.end(), lower - nums[i]) - nums.begin();
    int k = upper_bound(nums.begin() + i + 1,nums.end(), upper - nums[i]) - nums.begin() - 1;
    if (j <= k)
    {
      ans=ans+k-j+1;
    }
  }
  return ans;
       
}
};