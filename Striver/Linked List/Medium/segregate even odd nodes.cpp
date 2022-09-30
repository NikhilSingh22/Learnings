// this answer is based on segregating on the basis of the value of the nodes (even or odd).

class Solution{
public:
    Node* divide(int N, Node *head){
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        Node *dummy1 = new Node(-1); //creating two dummy nodes
        Node *dummy2 = new Node(-1);
        
        Node *d1 = dummy1;
        Node *d2 = dummy2;
        
        Node *temp = head;
        
        while(temp!=NULL)
        {
            if(temp->data&1==1)  
            {
                d1->next = temp;
                d1=d1->next;
            }
            else
            {
                d2->next=temp;
                d2=d2->next;
            }
            temp=temp->next;
        }
        d1->next=NULL; // assiging both the last terms to NULL since it can be pointing to another nodes as well
        d2->next=NULL;
        
        d1 = dummy1; 
        
        d1=d1->next;
        d2->next=d1;
        
        d2 = dummy2;
        d2=d2->next;
        
        return d2;
    }
  
  
  
  // this solution is of leetcode based on the indexing of the nodes even or odd
  ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode* Dummy1 = new ListNode(-1); 
        ListNode* Dummy2 = new ListNode(-1);

        ListNode*d1=Dummy1,*d2=Dummy2,*temp=head;
        int count=1;
        while(temp!=NULL)
        {
            if(count&1==1)
            {
                d1->next=temp;
                d1=d1->next;
            }
            else
            {
                d2->next=temp;
                d2=d2->next;
            }
            temp=temp->next;
            count++;
        }
        d1->next=NULL;
        d2->next=NULL;

        d2=Dummy2;
        d2=d2->next;
        d1->next=d2;

        d1=Dummy1;
        d1=d1->next;

        return d1;
    }
