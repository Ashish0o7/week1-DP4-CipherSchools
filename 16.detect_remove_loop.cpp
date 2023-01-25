class Solution
{
    public:
    void removeLoop(Node* head)
    {
         Node*slow=head;
        Node*fast=head;
        
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
        
        if(fast == slow){
            slow = head;
            while(fast != slow){
                slow = slow -> next;
                fast = fast -> next;
            }
            
            Node* temp = slow -> next;
            while(temp -> next != slow){
                temp = temp -> next;
            }
            temp -> next = NULL;
        }
    }
};