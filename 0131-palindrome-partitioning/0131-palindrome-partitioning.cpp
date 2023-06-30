class Solution {
public:
   
    void solve(string &s ,int idx , vector<string> &path ,vector<vector<string>> &ans)
    {
        if(idx==s.size())
        {  ans.push_back(path);
            return;
        }
        
        for(int i=idx; i<s.size(); i++)
        {
            if(canPartition(s,idx,i))
            {
             path.push_back(s.substr(idx,i-idx + 1));
             solve(s , i+1 , path , ans);
             path.pop_back();
            }
        }
        
        
    }
    
    
    bool canPartition(string s , int start , int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
                return false;
        }
        
        return true;
    }
    
    
    vector<vector<string>> partition(string s)
    {
    
        vector<vector<string>> ans;
        
        vector<string> path;
        
        
        solve(s , 0 , path , ans);
        
        return ans;
        
    }
};