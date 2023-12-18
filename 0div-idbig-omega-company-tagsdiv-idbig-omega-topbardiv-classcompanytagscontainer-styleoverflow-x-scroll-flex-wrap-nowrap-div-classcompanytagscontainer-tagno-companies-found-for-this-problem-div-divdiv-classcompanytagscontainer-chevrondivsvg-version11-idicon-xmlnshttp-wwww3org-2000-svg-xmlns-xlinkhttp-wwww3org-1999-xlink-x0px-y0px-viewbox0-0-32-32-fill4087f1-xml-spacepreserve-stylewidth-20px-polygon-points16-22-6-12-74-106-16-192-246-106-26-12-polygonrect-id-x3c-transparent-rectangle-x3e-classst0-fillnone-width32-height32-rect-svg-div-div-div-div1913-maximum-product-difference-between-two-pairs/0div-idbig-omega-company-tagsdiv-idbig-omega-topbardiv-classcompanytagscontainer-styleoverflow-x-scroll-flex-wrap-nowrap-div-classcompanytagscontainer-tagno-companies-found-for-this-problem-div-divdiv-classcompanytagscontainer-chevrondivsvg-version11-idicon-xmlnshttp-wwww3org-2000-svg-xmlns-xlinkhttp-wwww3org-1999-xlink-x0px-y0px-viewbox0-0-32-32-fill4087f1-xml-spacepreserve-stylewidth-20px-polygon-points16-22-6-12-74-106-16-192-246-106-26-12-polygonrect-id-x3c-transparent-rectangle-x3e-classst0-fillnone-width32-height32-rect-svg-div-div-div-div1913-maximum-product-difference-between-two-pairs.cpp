class Solution {
public:
    int maxProductDifference(vector<int>& nums) 
    {
    
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        
        int t1 = nums[n-1] * nums[n-2];
        
        
        int t2 = nums[0] * nums[1];
        
        
        
        return t1-t2;
        
        
    }
};