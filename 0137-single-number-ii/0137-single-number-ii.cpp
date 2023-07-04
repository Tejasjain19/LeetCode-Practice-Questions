class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ans=0;
        unordered_map<int,int> mp;
        
        for(auto it : nums)
        {
            mp[it]++;
        }
        
        
        for(auto it : mp)
        {
            if(it.second==1)
                ans=it.first;
        }
        
        return ans;
        
    }
};