  bool isPalindrome(Node *head)
    {
        if(head==NULL || head->next==NULL)
         return true;
         
        Node*slow=head,*fast=head;
        //finding mid
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
    //reversing second half of the linked list after mid;
        Node* prevptr = NULL,*currptr = slow, *nextptr;
        while(currptr!=NULL)
        {
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr = nextptr;
        }
        
        Node*temp1 = head;
        Node*temp2=prevptr;
        
        while(temp2!=NULL)
        {
            if(temp1->data!=temp2->data)
             return false;
             
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        return true;
    }
