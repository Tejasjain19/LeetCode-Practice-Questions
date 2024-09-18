class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> str(n);
        
        for(int i = 0; i < n; i++) {
            str[i] = to_string(nums[i]);
        }

        sort(str.begin(), str.end(),
          [](string &a,string &b){ return a+b>b+a; }
        );
        if(str[0]== "0"){
            return "0";
        }

        string res;
        for(const string &it : str) {
            res += it;
        }

        return res;
    }
};