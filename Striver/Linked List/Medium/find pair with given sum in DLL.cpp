vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        Node *left = head;
        Node *right = head;
        vector<pair<int,int>>vec;
        if(head==NULL || head->next ==NULL)
        {
            return vec;
        }
        while(right->next!=NULL)
        {
            right = right->next;
        }
        
        while(left!=right)
        {
            if(left->data+right->data == target)
            {
                vec.push_back({left->data,right->data});
                
                left=left->next; // changing both pointer with not going to meet 
            }
            else if(left->data+right->data < target)
            {
                left=left->next;
            }
            else
            {
                right=right->prev;
            }
        }
        
        return vec;
    }
