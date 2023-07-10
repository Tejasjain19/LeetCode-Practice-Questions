class Solution {
public:
    
    void solve(vector<int>& candidates , int idx , int target , vector<vector<int>>& ans , vector<int> &ds )
    {
        if(idx==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
              
            }
            
              return;
        }
        
        if(candidates[idx]<=target)
        {
            ds.push_back(candidates[idx]);
            solve(candidates , idx , target-candidates[idx]  , ans , ds);
            ds.pop_back();
        }
        
        solve(candidates , idx+1 , target , ans , ds);
        
    }
    
    
    
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
    
        vector<vector<int>> ans;
        vector<int> ds;
        
        
        solve(candidates , 0 ,  target , ans , ds);
        
        
  //      sort(ans.begin(),ans.end());
        
        
        
        return ans;
        
        
    }
};