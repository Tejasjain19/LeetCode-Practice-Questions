class Solution {
public:
  
    vector<vector<int>> ans;
    
    void solve(int idx , int k ,  vector<int> curr , int n)
    {
        if(curr.size()==k)
        {
            ans.push_back(curr);
            return;
        }
        
        for(int i = idx; i<n+1 ; i++)
        {
            curr.push_back(i);
            solve(i+1 , k , curr , n);
            curr.pop_back();
            
        }
        
    }    
    
    
    
    
    vector<vector<int>> combine(int n, int k) {
    
        vector<int> curr;
        
        
        solve(1,k,curr,n);
        
        
        return ans;
    }
};