class Solution {
public:
    
    // sliding window 
    
    
    int longestSubarray(vector<int>& nums) 
    {
    
        int n=nums.size();
        
        int i=0,j=0,cnt=0,ans=0;
        
      for(j=0; j<n ; j++)
        {
            
          if(nums[j]==0)
               cnt++;
            
            while(cnt>1)
            {
                if(nums[i]==0)
                    cnt--;
                
                    i++;
            }
        
            
            ans=max(ans,j-i);
             
        }
        
        
        return ans;
        
        
        
        
        
    }
};