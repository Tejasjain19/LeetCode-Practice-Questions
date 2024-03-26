class Solution {
public:
    
    
    int getMEX(vector < int > & a) {
  int n = a.size();
        int ans=0;
  unordered_set < int > hash(a.begin(), a.end());
  for (int i = 1; i <= n + 1; i++) {
    if (hash.find(i) == hash.end()) {
      ans=i;
        break;
    }
  }
        return ans;
}
    
    
    
    int firstMissingPositive(vector<int>& nums)
    {
       int ans=getMEX(nums);
        
        return ans;
        
    }
};