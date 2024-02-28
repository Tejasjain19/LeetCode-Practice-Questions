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
    
    int height (TreeNode *root , int& d)
    {   // diameter=INT_MIN;
        if(root==NULL)
            return 0;
        
        int mxl = height(root->left,d);
        int mxr = height(root->right,d);
        
        d = max(d, mxl+mxr);
        
        return 1+max(mxl,mxr);
    
    }
    
    
    
    int diameterOfBinaryTree(TreeNode* root) 
    {
       int diameter = 0;
        
       height(root ,diameter);
        
      return diameter;  
    }
};