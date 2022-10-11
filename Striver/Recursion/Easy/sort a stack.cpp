void insert(stack<int> &s, int ele)
{
    if(s.size()==0 || s.top()<=ele)
    {
        s.push(ele);
        return;
    }
    
    int val = s.top();
    s.pop();
    insert(s,ele);
    s.push(val);
}
void SortedStack :: sort()
{
    if(s.empty())
        return;
        
    int ele = s.top();
    s.pop();
    
    sort();
    insert(s,ele);
}
