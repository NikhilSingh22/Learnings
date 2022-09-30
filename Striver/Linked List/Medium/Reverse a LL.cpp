struct Node* reverseList(struct Node *head)
    {
        if(head == NULL || head->next ==NULL)
        return head;
        
        Node *prevptr = NULL;
        Node *curptr = head;
        Node *nextptr;
        
        while(curptr!=NULL)
        {
            nextptr = curptr->next;
            curptr->next=prevptr;
            prevptr=curptr;
            curptr=nextptr;
        }
        
        return prevptr;
    }
