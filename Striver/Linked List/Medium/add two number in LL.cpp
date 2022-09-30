  struct Node* reverse(struct Node* temp)
    {
        struct Node*prevptr = NULL,*currptr=temp,*nextptr;
        while(currptr!=NULL)
        {
            nextptr= currptr->next;
            currptr->next =prevptr;
            prevptr=currptr;
            currptr=nextptr;
            
        }
        return prevptr;
    }
 
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
       struct Node* t1 = reverse(first);
       struct Node* t2 = reverse(second);
       struct Node* dummy = new struct Node(-1);
       struct Node* d = dummy;
       
       int sum = 0;
       int carr = 0;
       int rem=0;
       while(t1!=NULL || t2!=NULL||carr)
       {
            sum=0;   
           if(t1!=NULL)
           {
               sum+=t1->data;
               t1=t1->next;
           }
           if(t2!=NULL)
           {
               sum+=t2->data;
               t2=t2->next;
           }
           sum=sum+carr;
           rem = sum%10;
           carr = sum/10;
           struct Node* p = new struct Node(rem);
           d->next=p;
           d=d->next;
       }
     return reverse(dummy->next);
    }
