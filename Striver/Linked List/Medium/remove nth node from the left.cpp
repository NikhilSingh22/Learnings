// more than one passes O(n)+O(n);
ListNode* removeNthFromEnd(ListNode* head, int n) {
        int tot = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp=temp->next;
            tot++;
        }
        temp=head;
        if(tot == n)
        {
            head=head->next;
        }
        else if(n==1)
        {
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=NULL;
        }
        else
        {
            temp=head;
            int x = tot-n-1;
            while(x--)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
        }
       
       return head;
    }



// remove nth node from left in one pass 
ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(-1);
        dummy->next=head;
        ListNode* fast=dummy;
        ListNode* slow=dummy;
       
        while(n--)
        {
            fast=fast->next;
        }

        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }

        slow->next=slow->next->next;
    return dummy->next;
    }


// return nth node from left in one pass
int getNthFromLast(Node *head, int n)
{
    Node *dummy = new Node(-1);
    Node *fast = dummy,*slow=dummy;
    dummy->next=head;
    
    while(n--)
    {
        fast=fast->next;
        if(fast==NULL && n>=0) // if n is not 0 still fast = null or if n==0 but fast == null
         {
             return -1;
         }
    }
    

    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    
    return slow->next->data;
}
