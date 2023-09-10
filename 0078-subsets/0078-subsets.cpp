class Solution {
public:
    
    void solve(int idx , vector<int>& nums , vector<int> &ds ,  vector<vector<int>> &res )
    {
        res.push_back(ds);
        
        for(int i=idx ; i<nums.size(); i++)
        {   
            if(i!=idx && nums[i]==nums[i-1])  // condition to remove duplicates
                continue;
            
            
            ds.push_back(nums[i]);
            
            solve(i+1 , nums , ds , res);
            
            ds.pop_back();
        }
        
        
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
    // paramters --> idx , nums , ds , ans
       
  //  sort(nums.begin() , nums.end());
        
        
    vector<vector<int>> res;
    
    vector<int> ds ;     
        
    solve(0 , nums , ds , res);
        
    return res; 
        
    }
};