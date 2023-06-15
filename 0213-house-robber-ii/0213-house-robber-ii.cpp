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
       
        vector<int> temp1,temp2;
        
        if(n==1)
            return nums[0];
        
        for(int i=0; i<n; i++)
        {
            if(i!=0)
                temp1.push_back(nums[i]);
            
            if(i!=n-1)
                temp2.push_back(nums[i]);
        }
        
         vector<int> dp1(temp1.size(),-1);
         vector<int> dp2(temp2.size(),-1);
        
        return max(soln(temp1.size()-1,temp1,dp1) , soln(temp2.size()-1,temp2,dp2));
        
    }
};