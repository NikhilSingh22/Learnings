Node* reverse(Node* head)
{
    Node*prevptr = NULL,*currptr=head,*nextptr;
    while(currptr!=NULL)
    {
        nextptr= currptr->next;
        currptr->next =prevptr;
        prevptr=currptr;
        currptr=nextptr;
        
    }
    return prevptr;
}

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        Node *temp= reverse(head);
        int rem = 0;
        Node *temp2 = temp;
        Node *stemp = NULL;
        int sum1=1;
        while(temp!=NULL)
        {
            int sum = temp->data+rem+sum1;
             rem = sum>9?1:0;
             sum= sum>9?sum%10:sum;
             temp->data=sum;
             stemp=temp;
             temp=temp->next;
             sum1=0;
        }
        
        if(rem==1)
        {
            stemp->next= new Node(1);
        }
        
        head = reverse(temp2);
        return head;
    }
