class Solution {
public:
    ListNode* removeNodes(ListNode* head) 
    {
        if(head == NULL || head->next == NULL) 
        {
            return head;
        }
        ListNode* nextN = removeNodes(head->next);
        if(nextN->val > head->val)
        {
            return nextN;
        }
        head->next = nextN;
        return head;
    }
    
};