class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
    
        int n=nums.size(),i=0,j=0,sum=0,ans=INT_MAX;
        
        
        for(j=0; j<n; j++)
        {
            sum+=nums[j];
            
            while(sum>=target)
            {   
                ans=min(ans,j-i+1);
                sum-=nums[i];
                i++;
              
            }
            
        
            
        }
        
        if(ans==INT_MAX)
            return 0;
        
        
        return ans;
        
        
        
        
    }
};