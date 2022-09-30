//with time complexity nlogn and space complexity n
void sort(Node **head)
{
    vector<int>vec;
    
    Node * temp = *head;
    while(temp!=NULL)
    {
        vec.push_back(temp->data);
        temp=temp->next;
    }
    
    sort(vec.begin(),vec.end());
    
    temp=*head;
    for(int i=  0;i<vec.size();i++)
    {
        temp->data=vec[i];
        temp=temp->next;
    }

}


// we want result is o(n) and o(1) space;
