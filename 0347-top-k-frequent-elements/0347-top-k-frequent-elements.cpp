class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
    
        map<int,int> mp;
        vector<int> ans;
        
        for(auto it : nums)
        {
            mp[it]++;
        }
        
       priority_queue<pair<int,int> , vector<pair<int,int>> , greater <pair<int,int>>> minh;        
         for(auto it : mp)
        {
            minh.push({it.second , it.first});
             
            if(minh.size()>k)
            {
                minh.pop();
            }
             
        } 
        
        while(minh.size()!=0)
        {
            ans.push_back(minh.top().second);
            minh.pop();
        }
        
        return ans;
    }
};