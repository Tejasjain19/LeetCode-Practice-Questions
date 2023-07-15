class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int> dq;
        vector<int> ans;
        
        
        
        for(int i=0; i<nums.size(); i++)
        {
            
            if(!dq.empty() && dq.front()==i-k)   // out of bound indexes
                dq.pop_front();
            
            while(!dq.empty() && nums[dq.back()]<nums[i])  // indexes that are of no use
                dq.pop_back();
            
            dq.push_back(i);
            
            
            if(i>=k-1)   // k=3 ... ans occurs at 2nd index -> k-1 
                ans.push_back(nums[dq.front()]);
            
            
            
        }
        
        
        
        
        return ans;
        
        
        
        
        
        
        
    }
};