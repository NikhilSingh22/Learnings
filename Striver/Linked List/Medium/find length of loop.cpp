int countNodesinLoop(struct Node *head)
{
    if(head==NULL || head->next == NULL)
     return 0;
    
    Node* slow =head,*fast=head;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    
    if(fast!=slow) // this showing no cycle
     return 0;
    
    int count = 0;
    do
    {
        fast=fast->next;
        count++;
    }while(fast!=slow);
    
    
    return count;
}
