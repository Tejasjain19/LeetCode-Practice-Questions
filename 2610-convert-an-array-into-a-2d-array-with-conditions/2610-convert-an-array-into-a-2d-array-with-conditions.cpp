class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
     
       int n=nums.size();
            vector<vector<int>> temp;
        set<int> s;
        for(auto it : nums)
        {
            s.insert(it);
        }
        
        if(s.size()==1)
        {    
            vector<int> v(n);
             vector<vector<int>> ans;

         for(auto it : nums)
         {
             v.push_back(it);
         }
            
         ans.push_back(v);
        }
        
        

        sort(nums.begin(), nums.end());
  
        
    while (!nums.empty()) 
    {
        vector<int> r = {nums[0]};
        nums.erase(nums.begin());
        for (auto it = nums.begin(); it != nums.end(); ) 
        {
            if (find(r.begin(), r.end(), *it) == r.end()) 
            {
                
                r.push_back(*it);
                it = nums.erase(it);
            } 
            else 
            {
                it++;
                
            }
        }
        temp.push_back(r);
    }
        return temp;
    }
};