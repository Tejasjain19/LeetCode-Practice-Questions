class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        
        int mx = INT_MIN,cnt=0;
        
        for(auto it : nums)
        {
            mp[it]++;
        }
        
        for(auto it : mp)
        {
            mx = max(mx,it.second);
        }
        
        
        for(auto it : mp)
        {
            if(mx==it.second)
            {
                cnt+=it.second;
            }
        }
        
        return cnt;
    }
};