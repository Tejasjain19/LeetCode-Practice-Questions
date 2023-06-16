
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

       vector<vector<string>> ans;
       
        int n = strs.size();
        
       map<map<char,int> , vector<string>> mp;
        
        
      for(int i=0; i<n; i++)  
      {
          map<char,int> temp;
          
         for(auto it : strs[i])
         {
             temp[it]++;
         }
          
          
          mp[temp].push_back(strs[i]);
          
      }  
 
        
        
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }

        return ans;
    }
};