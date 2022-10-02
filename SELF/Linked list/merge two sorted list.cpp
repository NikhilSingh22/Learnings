ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*dummy = new ListNode(-1);
        ListNode *d=dummy;

        if(!list1)
         return list2;
        if(!list2)
          return list1;

        while(list1 && list2)
        {
            if(list1->val<=list2->val)
            {
                d->next=list1;
                list1=list1->next;
            }
            else
            {
                d->next=list2;
                list2=list2->next;
            }
            d=d->next;
        }
        if(list1)
        {
            d->next=list1;
        }
        if(list2)
        {
            d->next=list2;
        }

        return dummy->next;
    }
