//  next->
// 5 -> 10 -> 19 -> 28  
// |     |     |     |  bottom |
// 7     20    22   35
// |           |     | 
// 8          50    40
// |                 | 
// 30               45
// Output:  5-> 7-> 8- > 10 -> 19-> 20->
// 22-> 28-> 30-> 35-> 40-> 45-> 50.
// Explanation:
// The resultant linked lists has every 
// node in a single level.

Node *merge(Node *a, Node *b)
{
    Node *dummy = new Node(-1);
    Node *d = dummy;
    
    while(a!=NULL && b!=NULL)
    {
        if(a->data<b->data)
        {
            d->bottom=a;
            a=a->bottom;
            d=d->bottom;
        }
        else
        {
            d->bottom=b;
            b=b->bottom;
            d=d->bottom;
        }
    }
    if(a)d->bottom=a;
    else d->bottom =b;
    
    return dummy->bottom;
}
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL)
   {
       return root;
   }
   
   root->next= flatten(root->next);
   root = merge(root,root->next);
   
   return root;
}
