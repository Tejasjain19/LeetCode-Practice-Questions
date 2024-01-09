class Solution {
private:
      
    void addLeafToSum(TreeNode* root, vector<int>& ourVec) {
        if (!root) {
            return;
			// Push back the value of each leaf into our vector
        } else if (root && root->left == nullptr && root->right == nullptr) {
            ourVec.push_back(root->val);
        }
        addLeafToSum(root->left, ourVec);
        addLeafToSum(root->right, ourVec);
        return;
    }
    
public:

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> root1Vec;
        vector<int> root2Vec;
        addLeafToSum(root1, root1Vec);
        addLeafToSum(root2, root2Vec);
		// If there are a different number of leafs, it can't be the same
        if (root1Vec.size() != root2Vec.size())
         return false;
        for (int i; i < root1Vec.size(); ++i)
        {
            if (root1Vec[i] != root2Vec[i]) 
            return false;
        }
		// If all checks passed, return true
        return true;
    }
};