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
    
    int calclen(ListNode* head)
    {
        int len=0;
        
        while(head != NULL)
        {
            len++;
            head=head->next;
        }
        return len;
    }
    
    
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
     
        int len = calclen(head);
        
        vector<ListNode*> ans;
        
        int noofparts = len/k;
        
        int extra = len%k;
        
        ListNode *prev = NULL;
        ListNode *curr = head;
        
        while(head != NULL)
        {
            
            int part = noofparts;
            ans.push_back(curr);
            
            while(part!=0)
            {
                prev = curr;
                curr = curr->next;
                part--;
            }
            
            if(extra!=0 && curr!=NULL)
            {
                extra--;
                prev = curr;
                curr = curr->next;
                
            }
            
            if(prev!=NULL)
            {
                head = curr;
                prev->next=NULL;
            }
            
            
            
        }
        
        while(ans.size()!=k)
        {
            ans.push_back(NULL);
          
        }
        
        return ans;
    
    }
};