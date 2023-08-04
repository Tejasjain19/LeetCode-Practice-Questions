
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        
        if(root==NULL)
            return res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        bool ltor=true;
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int> row(size);
            
            
            for(int i=0; i<size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                
                int index;
                
                if(ltor==true)
                {
                    index=i;
                }
                
                else 
                {
                    index = size-i-1;
                }
                
                row[index]=node->val;
                
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }
                
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
                
          
                
            }
            
                  ltor=!ltor;
            res.push_back(row);
            
            
            
        }
        
        
        return res;
    }
};