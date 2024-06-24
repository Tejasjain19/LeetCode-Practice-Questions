class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) 
    {
        deque<int>dq;
        int ans = 0, n = nums.size(), flip = 0;
        for(int i=0;i<n;i++)
        {
            if(not dq.empty() and dq.front() == i)
            {
                dq.pop_front();
                flip ^= 1;
            }
            if(not (nums[i] ^ flip))
            {
                if(i+k > n) return -1;
                dq.push_back(i+k);
                flip ^= 1;
                ans++;
            }
        }
        return ans;
    }
};