class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n=nums.size();
        
        vector<int> ans;
        
        for(int i=0; i<n; i++)
        {
            
            if(nums[i]==target)
            {
                ans.push_back(i);
            }
            
            
        }
        
       int t = ans.size();
        
        if(t==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        
        if(t==1)
        {
            ans.push_back(ans[0]);
            return ans;
        }
        
        if(t==2)
        {
            return ans;
        }
         vector<int> fans;
        
        
        if(t>2)
        {
       
        fans.push_back(ans[0]);
        fans.push_back(ans[t-1]);
        }
        
        return fans;
        
    }
};