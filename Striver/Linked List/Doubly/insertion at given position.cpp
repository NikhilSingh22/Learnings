void addNode(Node *head, int pos, int data)
{
   int count = 0;
   Node *n = new Node(data);
   Node *temp = head;
   
   while(count!=pos)
   {
       temp=temp->next;
       count++;
   }
   
   n->next=temp->next;
   if(temp->next!=NULL)
    temp->next->prev=n;
    n->prev=head;
    temp->next=n;
   
}
