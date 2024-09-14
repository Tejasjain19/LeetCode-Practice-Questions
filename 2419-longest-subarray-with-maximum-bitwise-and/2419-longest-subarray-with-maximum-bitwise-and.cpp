class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
    
    //    sort(nums.begin(),nums.end());
        
        
        
     int n=nums.size(),flag=0,ans=0;
        
        if(n==1)
        {
            return 1;
        }
        
    int mx = *max_element(nums.begin(), nums.end()); // to find max element in array

     for(auto it : nums)
     {
         if(it==mx)
             flag++;
         else
         {
             ans=max(ans,flag);
             flag=0;
         }
     }
        
        ans=max(flag,ans);
        
     return ans;
        
        
    }
};