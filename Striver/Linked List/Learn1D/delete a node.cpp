Node* deleteNode(Node *head,int x)
{
   Node *temp = head;
   int count =1;
   
   
   if(x == 1) // if we have to delete head 
   {
       head = head ->next;
       delete temp;
       return head;
   }
   
   while(count<x-1) // for traversing just before the node
   {
       temp=temp->next;
       count++;
   }
   
   Node *todelete = temp->next;
   temp->next = todelete->next;
   
   delete todelete;
   return head;
}
