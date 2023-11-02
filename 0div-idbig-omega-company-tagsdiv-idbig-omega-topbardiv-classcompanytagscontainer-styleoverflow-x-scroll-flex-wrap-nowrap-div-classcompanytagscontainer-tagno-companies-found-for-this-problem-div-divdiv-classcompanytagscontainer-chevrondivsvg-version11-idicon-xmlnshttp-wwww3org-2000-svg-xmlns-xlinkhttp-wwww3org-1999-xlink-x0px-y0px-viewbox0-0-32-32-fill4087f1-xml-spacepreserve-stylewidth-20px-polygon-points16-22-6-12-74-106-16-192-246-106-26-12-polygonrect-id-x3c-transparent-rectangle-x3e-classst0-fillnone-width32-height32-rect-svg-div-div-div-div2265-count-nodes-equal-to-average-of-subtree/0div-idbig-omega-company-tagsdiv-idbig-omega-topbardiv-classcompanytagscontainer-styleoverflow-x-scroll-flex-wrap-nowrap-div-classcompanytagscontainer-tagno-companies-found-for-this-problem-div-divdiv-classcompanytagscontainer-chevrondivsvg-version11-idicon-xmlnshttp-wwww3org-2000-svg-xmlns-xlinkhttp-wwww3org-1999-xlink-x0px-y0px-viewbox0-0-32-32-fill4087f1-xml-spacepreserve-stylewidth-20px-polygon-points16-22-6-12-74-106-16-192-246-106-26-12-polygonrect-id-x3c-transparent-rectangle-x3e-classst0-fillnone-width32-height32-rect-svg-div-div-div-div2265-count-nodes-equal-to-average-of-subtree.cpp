/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    pair<int, int> dfs(TreeNode* root, int &ans) {
        if(root==NULL)
            return {0, 0};
        
        auto l = dfs(root -> left, ans);
        auto r = dfs(root -> right, ans);
        
        int sum = root -> val + l.first + r.first;
        int n = l.second + r.second + 1;
        
        if(sum / n == root -> val) ans++;
        
        return {sum, n};
    }
    
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        dfs(root, ans);
        
        return ans;
    }
};