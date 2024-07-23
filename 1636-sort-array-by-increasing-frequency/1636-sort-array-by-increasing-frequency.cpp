class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        int n=nums.size();
        
        priority_queue<pair<int,int>> maxh;
        
        map<int,int> mp;
        vector<int> v;
        
        for(int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it= mp.begin(); it!=mp.end(); it++)
        {
              maxh.push({-it->second , it->first});
            
        }
        
        while(maxh.size()>0)
        {
            int freq=maxh.top().first;
            int ele=maxh.top().second;
            
            for(int i=1; i<=abs(freq); i++)
            {
                v.push_back(ele);
                
            }
            maxh.pop();
        }
      //  reverse(v.begin(),v.end());
        return v;
    }
};