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
    vector<int> largestValues(TreeNode* root) {
   
        vector<int> temp;
        
        if(root==NULL)
            return temp; 
        

        
        queue<TreeNode *> q;
        
        q.push(root);
        
    
        while(!q.empty())
        {
            int size = q.size();
            vector<int> level;
            
            int mx=INT_MIN;
            
            
            
            for(int i=0; i<size; i++)
            {
                auto it = q.front();
                
                q.pop();
                
                if(it->left!=NULL)
                {
                    q.push(it->left);
                }
                
                if(it->right!=NULL)
                {
                    q.push(it->right);
                }
                
                level.push_back(it->val);
                mx=max(mx,it->val);
            }
           
            temp.push_back(mx);
            
        }
        
        return temp;
    }
};