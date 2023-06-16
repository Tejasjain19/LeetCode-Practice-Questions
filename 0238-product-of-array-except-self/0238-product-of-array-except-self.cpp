class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
          
        int n = nums.size(),product=1;
        
        vector<int> prod;
        
        
        for(int i=0; i<n; i++)
        {
            
           product*=nums[i];
           prod.push_back(product); 
            
            
        }
        
        product=1;
        
        for(int i=n-1 ; i>0 ; i--)
        {
            
            prod[i]=prod[i-1]*product;
            product*=nums[i];
            
        }
        
        prod[0]=product;
        
        return prod;
        
    }
};