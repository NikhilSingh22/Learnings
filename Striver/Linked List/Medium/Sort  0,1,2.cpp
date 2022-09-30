 Node* segregate(Node *head) {
    
    Node* zero = new Node(-1);
    Node* one = new Node(-1);
    Node* two = new Node(-1);
    
    Node*z=zero,*o=one,*t=two,*temp=head;
    
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            z->next=temp;
            z=z->next;
        }
        else if(temp->data==1)
        {
            o->next=temp;
            o=o->next;
        }
        else
        {
            t->next=temp;
            t=t->next;
        }
        temp=temp->next;
    }
    o->next=NULL;
    t->next=NULL;
    z->next=NULL;
    
    t=two;
    t=t->next;
    o->next=t;
    
    o=one;
    o=o->next;
    z->next=o;
    
    z=zero;
    z=z->next;
    
    return z;
    }
