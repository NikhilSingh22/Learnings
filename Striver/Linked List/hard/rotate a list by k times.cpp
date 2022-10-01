 ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        int tot=0;
        ListNode* temp =head,*ptr1,*ptr2,*newhead;
        while(temp!=NULL) //counting total nodes
        {
            tot++;
            temp=temp->next;
        }
        k = k%tot; // if k is greater than total reducing multiple rotate cycle
        if(k==0)
        {
            return head;
        }

        int x = tot-k-1;
   
        ptr2=head;
        while(x--)
        {
            ptr2=ptr2->next;
        }
        ptr1=ptr2->next;
        ptr2->next=NULL; // making a cut 
        newhead=ptr1;
   
        while(ptr1->next!=NULL) // traversing to the tail for adding 
        {
            ptr1=ptr1->next;
        }
   
        ptr1->next=head;
        return newhead;
    }




// By making it ciruclar linked list (optimized)
ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        int tot=1;
        ListNode* temp =head,*newhead;
        while(temp->next!=NULL)
        {
            tot++;
            temp=temp->next;
        }
        temp->next=head; // making it circular linked list
        if(k%tot)
        {
            for(int i = 0;i<(tot-(k%tot));i++)
            {
                temp=temp->next;
            }
        }
        newhead=temp->next;
        temp->next=NULL;
        return newhead;
      
    }
