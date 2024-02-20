class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
          int missing=0;
         int flag=0;
        
        
      sort(nums.begin(),nums.end());
        
       for(int i=0; i<nums.size(); i++)
       {
           if(nums[i]!=i)
           {
              missing=nums[i]-1;
               flag=1;
               break;
           }
           
       }
        
        if(flag==0)
        {
            missing=nums.size();
        }
        
        return missing;
    }
};