class Solution {
private:
void dfs(const vector<string>& A, int i, vector<bool>& seen) {
    seen[i] = true;
    for (int j = 0; j < A.size(); ++j)
      if (!seen[j] && isSimilar(A[i], A[j]))
        dfs(A, j, seen);
  }

  bool isSimilar(const string& X, const string& Y) {
    int diff = 0;
    for (int i = 0; i < X.length(); ++i)
      if (X[i] != Y[i] && ++diff > 2)
        return false;
    return true;
  }
  public:
    int numSimilarGroups(vector<string>& strs) {
        int ans = 0;
    vector<bool> seen(strs.size());

    for (int i = 0; i < strs.size(); ++i)
      if (!seen[i]) {
        dfs(strs, i, seen);
        ++ans;
      }

    return ans;
    }
};