/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,0));
        ListNode* temp=head;
        int left=0,right=n-1;
        int top=0,bottom=m-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
             if(temp){
                ans[top][i]=temp->val;
                temp=temp->next;
             }
             else{
                ans[top][i]=-1;
             }
            }
            top++;
            for(int j=top;j<=bottom;j++){
                if(temp){
                    ans[j][right]=temp->val;
                    temp=temp->next;
                }
                else{
                    ans[j][right]=-1;
                }
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    if(temp){
                        ans[bottom][i]=temp->val;
                        temp=temp->next;
                    }
                    else{
                        ans[bottom][i]=-1;
                    }
                }
            bottom--;
            }
            if(left<=right){
             for(int i=bottom;i>=top;i--){
                if(temp){
                    ans[i][left]=temp->val;
                    temp=temp->next;
                }
                else{
                    ans[i][left]=-1;
                }
             }
             left++;   
            }
        }
        return ans;
    }
};