class Solution {
public:
 int solve(int i, int j, vector<int> &cuts, vector<vector<int>> &dp) 
 {
	if(i > j)
        return 0;
     
	if(dp[i][j] != -1) 
        return dp[i][j];
	int result = INT_MAX;
     
	for(int k = i; k <= j; k++)
    {
		int temp = cuts[j + 1] - cuts[i - 1] + solve(i, k - 1, cuts, dp) + solve(k + 1, j, cuts, dp);
		result = min(result, temp);
	}
	return dp[i][j] = result;
}

int minCost(int n, vector<int>& cuts) {
	cuts.insert(cuts.begin(), 0);
	cuts.push_back(n);
	sort(cuts.begin(), cuts.end());
	vector<vector<int>> dp(cuts.size(), vector<int>(cuts.size(), -1));
	return solve(1, cuts.size() - 2, cuts, dp);
}
};