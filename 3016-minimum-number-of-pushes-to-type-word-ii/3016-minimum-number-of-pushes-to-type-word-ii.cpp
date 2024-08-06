class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> mp;
        for(auto it : word) mp[it]++;
        priority_queue<int> pq;
        for(auto it : mp)
        {
            pq.push(it.second);
        }

        int count = 0;
        int ans = 0;
        while(!pq.empty())
        {
            int n = pq.top(); pq.pop();
            ans += n *(count/8 +1);
            count++;
        }
        return ans;
    }
};