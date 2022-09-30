Node* deleteMid(Node* head)
{
    if(head->next==NULL)
    {
        return NULL;
    }
    if(head->next->next==NULL)
    {
        head->next=NULL;
        return head;
    }
    Node *fast = head;
    Node *dummy = new Node(-1);
    dummy->next=head;
    Node *slow = dummy;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    
    slow->next=slow->next->next;
    return head;
}
