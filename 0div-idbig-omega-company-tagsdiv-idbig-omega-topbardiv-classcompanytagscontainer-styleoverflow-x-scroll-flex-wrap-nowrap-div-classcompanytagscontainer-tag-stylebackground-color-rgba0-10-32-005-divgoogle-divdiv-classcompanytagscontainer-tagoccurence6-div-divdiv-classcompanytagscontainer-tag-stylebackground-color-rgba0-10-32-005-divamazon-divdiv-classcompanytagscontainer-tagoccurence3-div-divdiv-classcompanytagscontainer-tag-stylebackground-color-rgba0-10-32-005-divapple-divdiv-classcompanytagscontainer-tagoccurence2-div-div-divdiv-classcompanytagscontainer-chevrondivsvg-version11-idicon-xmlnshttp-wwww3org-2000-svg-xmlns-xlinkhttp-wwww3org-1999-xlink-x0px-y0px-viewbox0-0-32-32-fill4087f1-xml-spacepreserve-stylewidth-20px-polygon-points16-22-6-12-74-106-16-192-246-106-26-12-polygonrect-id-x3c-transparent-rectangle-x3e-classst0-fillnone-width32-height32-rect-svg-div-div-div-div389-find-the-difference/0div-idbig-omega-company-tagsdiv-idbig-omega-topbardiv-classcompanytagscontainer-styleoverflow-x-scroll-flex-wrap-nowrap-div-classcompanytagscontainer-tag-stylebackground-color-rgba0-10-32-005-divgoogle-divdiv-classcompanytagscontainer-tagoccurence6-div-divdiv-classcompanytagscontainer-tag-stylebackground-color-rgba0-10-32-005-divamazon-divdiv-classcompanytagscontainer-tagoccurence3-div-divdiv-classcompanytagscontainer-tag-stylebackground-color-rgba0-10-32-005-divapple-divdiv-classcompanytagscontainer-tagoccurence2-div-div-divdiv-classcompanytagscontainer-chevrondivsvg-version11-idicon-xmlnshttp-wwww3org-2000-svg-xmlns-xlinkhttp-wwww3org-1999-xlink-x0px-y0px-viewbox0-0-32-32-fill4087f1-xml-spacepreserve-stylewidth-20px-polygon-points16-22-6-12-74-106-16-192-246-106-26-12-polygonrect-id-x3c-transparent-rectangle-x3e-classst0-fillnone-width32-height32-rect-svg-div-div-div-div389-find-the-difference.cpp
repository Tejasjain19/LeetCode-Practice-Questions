class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char ans;
        
        
        map<char,int> mp;
        
        for(auto it : t)
        {
            mp[it]++;
        }
        
        for(auto it : s)
        {
            mp[it]--;
        }
        
        
        for(auto it : mp)
        {
            if(it.second==1)
            ans=it.first;
        }
        
        
        
        return ans;
        
        
        
    }
};