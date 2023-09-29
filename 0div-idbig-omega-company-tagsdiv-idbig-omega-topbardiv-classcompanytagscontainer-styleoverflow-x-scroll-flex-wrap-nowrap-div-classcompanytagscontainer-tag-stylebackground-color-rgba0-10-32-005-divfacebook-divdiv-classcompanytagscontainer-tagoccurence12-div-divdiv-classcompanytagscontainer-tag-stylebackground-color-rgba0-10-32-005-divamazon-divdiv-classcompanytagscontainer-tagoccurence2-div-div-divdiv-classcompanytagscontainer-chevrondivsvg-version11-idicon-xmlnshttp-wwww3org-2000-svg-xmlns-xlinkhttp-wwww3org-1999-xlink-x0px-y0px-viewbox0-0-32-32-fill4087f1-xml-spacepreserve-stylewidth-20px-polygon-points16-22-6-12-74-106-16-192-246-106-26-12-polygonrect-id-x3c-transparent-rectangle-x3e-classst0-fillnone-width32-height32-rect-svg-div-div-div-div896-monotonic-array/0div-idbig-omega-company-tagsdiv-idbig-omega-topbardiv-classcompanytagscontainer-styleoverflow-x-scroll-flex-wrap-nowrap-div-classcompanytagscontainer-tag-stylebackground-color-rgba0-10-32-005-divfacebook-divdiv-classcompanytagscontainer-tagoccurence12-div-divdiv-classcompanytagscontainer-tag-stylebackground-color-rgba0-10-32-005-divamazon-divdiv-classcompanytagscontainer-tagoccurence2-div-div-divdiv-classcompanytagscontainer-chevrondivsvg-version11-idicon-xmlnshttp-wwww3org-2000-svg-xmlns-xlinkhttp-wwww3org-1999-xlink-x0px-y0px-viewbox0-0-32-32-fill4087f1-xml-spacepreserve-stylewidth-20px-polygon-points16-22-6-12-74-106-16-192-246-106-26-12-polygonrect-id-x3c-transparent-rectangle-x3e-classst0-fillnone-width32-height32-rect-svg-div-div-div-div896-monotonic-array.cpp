class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
     
        int incnt=0,decnt=0,n=nums.size();
        
        
        for(int i=1; i<n; i++)
        {
            if(nums[i-1]>=nums[i])
                decnt++;
            
            if(nums[i-1]<=nums[i])
                incnt++;
        }
        
        
        if(incnt==n-1 || decnt==n-1)
            return true;
        
        return false;
        
    }
};