class Solution {
public:
unsigned long long ans = 1;

void solve(TreeNode* root,vector<unsigned long long > &v,int l,unsigned long long p){
    
    if(root == NULL){
        return;
    }
    
    if(v[l] == -1){
        v[l] = p;
    }
    
    ans = max(ans,p-v[l]+1);
 
    
    solve(root->left,v,l+1,2*p);
    solve(root->right,v,l+1,2*p+1);
}
int widthOfBinaryTree(TreeNode* root) 
{
    if(root == NULL){
        return 0;
    }
    
    vector<unsigned long long> v(3000,-1);
    solve(root,v,0,1);
    
    return ans;
}
};