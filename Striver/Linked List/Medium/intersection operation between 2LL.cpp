// LinkedList1: 9->6->4->2->3->8
// LinkedList2: 1->2->8->6
// Output: 6 2 8


Node* findIntersection(Node* head1, Node* head2)
    {
        Node*temp1=head1;
        Node*temp2=head2;
        Node*dummy = new Node(-1);
        Node *d =dummy;
        
        set<int>st;
        while(temp2!=NULL)
        {
            st.insert(temp2->data);
            temp2=temp2->next;
        }
        
        
        while(temp1!=NULL)
        {
            auto pos = st.find(temp1->data);
            if(pos!=st.end())
            {
                Node *n = new Node(temp1->data);
                d->next=n;
                d=d->next;
            }
            
            temp1=temp1->next;
        }
        
        return dummy->next;
    }
