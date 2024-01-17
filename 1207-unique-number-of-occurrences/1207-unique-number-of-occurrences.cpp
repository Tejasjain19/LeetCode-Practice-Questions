class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        
        for(auto it : arr)
        {
            mp[it]++;
        }
        
        set<int> s;
        
        int cnt=0;
        
        for(auto it : mp)
        {
            cnt++;
            s.insert(it.second);
        }
        
        if(cnt==s.size())
            return true;
        
        
        return false;
        
        
        
        
    }
};