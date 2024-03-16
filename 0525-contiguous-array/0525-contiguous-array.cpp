class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int n=nums.size();
        

        
        for(int i=0; i<n; i++)
        {
            
            if(nums[i]==0)
            {
                nums[i]=-1;
            }
            
        }
        
        unordered_map<int,int> mpp; 
        
    int maxi = 0;
        
    int sum = 0; 
        
    for(int i = 0;i<n;i++) {
        sum += nums[i]; 
        if(sum == 0) {
            maxi = i + 1; 
        }
        else {
            if(mpp.find(sum) != mpp.end()) {
                maxi = max(maxi, i - mpp[sum]); 
            }
            else {
                mpp[sum] = i;
            }
        }   
    }

    return maxi; 
        
        
        
        
        
        
        
        
        
    }
};














// 1 1 1 1 0 1 0 1 



// 0 1 1 0 1 0 