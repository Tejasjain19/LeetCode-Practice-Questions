class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int m=nums1.size(),n=nums2.size();
        
        int i=0,j=0,ans=-1;
        
        
        
        while(i<m && j<n)
        {
           if(nums1[i]<nums2[j])
           {
               i++;
           }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            
            else
            {
              ans=nums1[i];
                break;
            }
        }
        
        
        
        
        
        
        return ans;
        
        
        
        
        
        
        
    }
};