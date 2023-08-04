	class Solution {
public:
   
    
    vector<string> ans1;
        
    void solve(TreeNode* root , string ans)
    {
        if(root==NULL)
            return;
        
        if(root->right==NULL && root->left==NULL)
        {
            ans+=to_string(root->val);
            ans1.push_back(ans);
            return;
        }
        
        
        ans+=to_string(root->val)+"->";
        
        solve(root->left,ans);
        solve(root->right,ans);
        
    }
    
        
        
        
        
        
    
    vector<string> binaryTreePaths(TreeNode* root) {
       
        solve(root,"");
        
        return ans1;
    }
};