class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      map<int,int> mp;
        
        
        for(auto it : nums)
        {
            mp[it]++;
        }
        int i=0,cnt=0;
        
        for(auto it : mp)
        {
            if(it.second==1)
            {  cnt++;
                nums[i]=it.first;
                i++;
            }
               if(it.second>=2)
            {
                nums[i]=it.first;
                   i++;
                nums[i]=it.first;
                   i++;
                   cnt+=2;
            }
            
        }
        
        return cnt;
    }
};