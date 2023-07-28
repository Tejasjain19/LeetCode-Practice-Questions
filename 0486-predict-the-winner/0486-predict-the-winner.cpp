class Solution {
public:
   
    int solve(vector<int>& nums , bool flag , int i , int j)
              {
                  
                  if(i>j)
                      return 0;
                  
                  if(flag)
                   return max(nums[i]+solve(nums,false,i+1,j),nums[j]+solve(nums,false,i,j-1));   
                  
                  return min(solve(nums,true,i+1,j),solve(nums,true,i,j-1));
                  
              }
    
    
    
    
    
    
    

    bool PredictTheWinner(vector<int>& nums) {
        
       int tot=0;
       int n=nums.size(),sum1=0;
        
       for(int i=0; i<n; i++)
       {
           tot+=nums[i];
       }
        
        sum1 = solve(nums , true , 0 , n-1);
        
        tot-=sum1;
        
        
        return sum1>=tot;
        
    }
};