	class Solution {
public:
    vector<string>ans1;
    
   void recurs(TreeNode* root,string ans)
    {
       if(root==NULL)
       {
           return ;
       }
    
        if(root->left==NULL&&root->right==NULL)
        {
            ans+=to_string(root->val);
            ans1.push_back(ans);
            return ;
        }

            ans+=to_string(root->val)+"->";
       
        recurs(root->left,ans);
        recurs(root->right,ans);
    }
    
    
    
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        recurs(root,"");
        
        return ans1;
    }
};