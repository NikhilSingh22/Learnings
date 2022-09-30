ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        int a=0,b=0;
        while(temp1!=NULL)
        {
            a++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            b++;
            temp2=temp2->next;
        }

        int skip = abs(a-b);
        temp1=headA;
        temp2=headB;
        if(a<b)
        {
            while(skip--)
            {
                temp2=temp2->next;
            }
        }
        else
        {
            while(skip--)
            {
                temp1=temp1->next;
            }
        }
        while(temp1!=NULL)
        {
            if(temp1==temp2)
            {
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    return NULL;
    }
