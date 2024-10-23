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
    TreeNode* replaceValueInTree(TreeNode* root) {
        int lev=0;
        unordered_map<int, int> mp;
        queue<TreeNode*> q;
        q.push(root);
        mp[0]=root->val;
        while(!q.empty()) 
        {
            lev++;
            int size=q.size();
            for(int i=0;i<size;i++) 
            {
                auto n=q.front();
                q.pop();
                if(n->left) 
                {
                    q.push(n->left);
                    mp[lev]+=(n->left->val);
                }
                if(n->right)
                {
                    q.push(n->right);
                    mp[lev]+=(n->right->val);
                }
            }
        }

        q.push(root);
        lev=0;
        root->val=0;
        while(!q.empty()) 
        {
            lev++;
            int size=q.size();
            for(int i=0;i<size;i++) 
            {
                auto n=q.front();
                q.pop();
                int lef=(n->left)?n->left->val:0;
                int ri=(n->right)?n->right->val:0;
                if(n->left) 
                {
                    q.push(n->left);
                    n->left->val=mp[lev]-lef-ri;
                }
                if(n->right) 
                {
                    q.push(n->right);
                    n->right->val=mp[lev]-lef-ri;
                }
            }
        }
        return root;
    }
};