// hare and tortoise if loop is present the hare and tortoise will meet at same place; 

bool detectLoop(Node* head)
    {
        if(head==NULL || head->next==NULL)
         return false;
        
        Node *fast =head,*slow=head;
        
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
            return true;
        }
        return false;
    }
