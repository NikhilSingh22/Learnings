 Node* deleteNode(Node *head_ref, int x)
    {
        int count =1;
      Node* temp = head_ref;
      if(x==1)
      {
          head_ref->next->prev = NULL;
          head_ref=head_ref->next;
          return head_ref;
      }
      while(count!=x)
      {
          temp=temp->next;
          count++;
      }
      
      temp->prev->next=temp->next;
      if(temp->next!=NULL) 
      temp->next->prev=temp->prev;
      
      return head_ref;
      
    }
