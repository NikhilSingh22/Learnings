Node* reverseDLL(Node * head)
{
    
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    Node* temp = head;
    Node* nextptr = NULL;  // two pointers for next node and prev node;
    Node* prevptr = NULL;
    
    while(temp->next!=NULL)
    {
        nextptr = temp->next;
        temp->next = prevptr;
        temp->prev = nextptr;
        
        prevptr = temp;
        temp=nextptr;
    }
    
    temp->next = prevptr;   // tail node next shoudl connect with prevptr
    temp->prev = NULL; 
    
    return temp;

}
