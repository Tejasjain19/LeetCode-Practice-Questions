class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
    
        int n=nums.size();
        
        int cnt=0 , el ; 
        
        
        for(int i=0; i<n; i++)
        {
            
            if(cnt==0)
            {
                cnt = 1;
                el = nums[i];
            }
            
            else if(el == nums[i])
            {
                cnt++;
            }
            
            else
            {
                cnt--;
            }
            
        }
        
        
        
        return el; 
        
        
        
        
        
        
        
    }
};