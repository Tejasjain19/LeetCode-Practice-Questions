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
    
    
    void inorder(TreeNode* root , vector<int>&ans)
    {
        
        if(root==NULL)
            return;
        
        inorder(root->left , ans);
        
        ans.push_back(root->val);
        
        inorder(root->right , ans);

        
    }
    
    
    vector<int> findMode(TreeNode* root) 
    {
        vector<int> ans;
        
        vector<int> tmp;
        
        int mx = INT_MIN;
        
        inorder(root,ans);
        
        map<int,int> mp;
        
       for(auto it : ans)
       {
           mp[it]++;
           mx = max(mp[it], mx);
       }
        
       for(auto it : mp)
       {
           if(it.second == mx)
           {
              tmp.push_back(it.first);
               
           }
       }
        
        return tmp;
        
    }
};