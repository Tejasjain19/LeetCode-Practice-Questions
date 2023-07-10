class Solution {
public:
    
    void soln(int idx , vector<int>& nums , int target , vector<int> &ds , vector<vector<int>> &ans  )
     {
     

         if(target==0)
         {
             ans.push_back(ds);
             return;
         }
        
        
     
      for(int i=idx ; i<nums.size() ; i++)
      {
          if(i!=idx && nums[i-1]==nums[i])
              continue;
          
          if(nums[i]>target)
              break;
          
          ds.push_back(nums[i]);
          
          soln(i+1 , nums , target-nums[i] , ds , ans );
          
          ds.pop_back();
          
          
      }
         
         
         
     
     }
    

    vector<vector<int>> combinationSum2(vector<int>& nums, int target)
    {
    
       vector<vector<int>> ans;
        vector<int> ds;
        
        sort(nums.begin() , nums.end());
        
        soln(0 , nums , target , ds , ans);
        
        return ans;
        
    }
};