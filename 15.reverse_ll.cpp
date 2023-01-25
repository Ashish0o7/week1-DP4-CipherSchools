class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         if(head == NULL || head->next == NULL)  return head;
        ListNode* prev = head;
        ListNode* curr = prev->next;
        head->next = NULL;
        while(prev != NULL && curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;    
    }
};