class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        
        
        int n = arr.size(),ans;
        
        for(auto it : arr)
        {
            mp[it]++;
        }
        
        
        int tmp = n/4;
        
        for(auto it : mp)
        {
            if(it.second>tmp)
                ans = it.first;
        }
        
        
        return ans;
        
    }
};