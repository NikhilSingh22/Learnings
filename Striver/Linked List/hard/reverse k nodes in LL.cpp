 ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* prevptr = NULL, *currptr = head, *nextptr;
        int count=0;
        ListNode* temp =head;

        while(temp!=NULL) // checking if count<k we will not reverse
        {
            count++;
            temp=temp->next;
        }


        if(k<=count){
            count=0;
            while(currptr!=NULL && count<k)
            {
                nextptr=currptr->next;
                currptr->next=prevptr;
                prevptr=currptr;
                currptr=nextptr;
                count++;
            }

            if(nextptr!=NULL)
            {
                head->next=reverseKGroup(nextptr,k); // sending nextptr since it is the element that points to the returning head;
            }
            return prevptr;
        }

        return head;// if starting count < k we cannot reverse so directly return head;
    }
