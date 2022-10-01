Node* copyRandomList(Node* head) {
        Node *iter = head;
        Node *front =head;

  //making new copyies and attaching with the original LL
        while(iter!=NULL)
        {
            front = iter->next;
            Node * copy = new Node(iter->val);
            iter->next=copy;
            copy->next=front;
            iter=front;
        }



// attaching copied nodes with random pointer
        iter = head;
        while(iter!=NULL)
        {
            if(iter->random!=NULL)
            {
                iter->next->random = iter->random->next;
            }
            iter = iter->next->next;
        }


 // detaching orginal LL and deep copy LL
        iter=head;
        Node * dummy = new Node(0);
        Node *copy = dummy;
        while(iter!=NULL)
        {
            front=iter->next->next;
            copy->next=iter->next;
            iter->next=front;
            copy=copy->next;
            iter=iter->next;
        }

        return dummy->next;
    }
