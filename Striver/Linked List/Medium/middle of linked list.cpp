//hare and tortoise method;

int getMiddle(Node *head)
    {
        if(head->next==NULL)
            return head->data;
            
        Node * fast = head;
        Node * slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        return slow->data;
    }
