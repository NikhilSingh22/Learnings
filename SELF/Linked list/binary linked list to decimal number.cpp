// 1->0->1
// 5

ListNode* reverse(ListNode* head)
    {
        ListNode*prev=NULL,*curr=head,*npr;
        while(curr)
        {
            npr=curr->next;
            curr->next=prev;
            prev = curr;
            curr=npr;
        }
        return prev;
    }

    int getDecimalValue(ListNode* head) {
        if(!head) return 0;
        if(head->next==NULL)
        {
            return head->val;
        }

        ListNode *temp = reverse(head);
        int count = 0;
        int num =0;
        while(temp)
        {
            num+=temp->val * pow(2,count);
            count++;
            temp=temp->next;
        }

        return num;
    }
