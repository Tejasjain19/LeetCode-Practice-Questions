class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        if(nums.size() == 1) return {nums[0]};
        if(k == 1) return nums;
        for(int i=0; i<nums.size()-k+1; i++){
            int maxi = -1;
            int cnt=0;
            for(int j=i; j<min(i+k, n); j++){
                if(j == 0){
                    cnt++;
                    continue;
                }
                if(cnt>0 && nums[j] == nums[j-1]+1){
                    maxi = max(maxi, nums[j]);
                }
                else if(cnt == 0){
                    cnt++;
                }
                else{
                    maxi = -1;
                    break;
                }
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};