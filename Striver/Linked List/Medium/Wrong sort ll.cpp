Node* reverse(Node *d2)
{
Node*prevptr=NULL,*currptr=d2,*nextptr;
     while(currptr!=NULL)
     {
         nextptr=currptr->next;
         currptr->next=prevptr;
         prevptr=currptr;
         currptr=nextptr;
     }
    return prevptr;

}
void sort(Node **head)
{
    
    if(*head==NULL || (*head)->next==NULL)
    {
        return;
    }
    
     Node *dummy1 = new Node(-1);
     Node *dummy2 = new Node(-1);
     
     Node*d1=dummy1;
     Node*d2=dummy2;

     Node *temp = *head;
     int count=1;
     
     while(temp!=NULL)
     {
         if(count&1==1)
         {
             d1->next=temp;
             d1=d1->next;
         }
         else
         {
           d2->next=temp;
           d2=d2->next;
         }
         temp=temp->next;
         count++;
     }
     d1->next=NULL;
     d2->next=NULL;
     
     d2 = dummy2;
     d2 = d2->next;
     
     dummy2->next=NULL;
     delete dummy2;
     
    Node * prevptr = reverse(d2);
    
    if(d2->data<d1->data)
    {
        d1 = dummy1;
        d1=d1->next;
        d2->next=d1;
        *head = prevptr;
    }
    else
    {
        d1->next=prevptr;
        d1=dummy1;
        d1=d1->next;
        
        *head = d1;
    }
     
}
