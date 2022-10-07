 void insert(stack<int> &st,int ele)
    {
        if(st.empty())
        {
            st.push(ele);
            return;
        }
        
        int val = st.top();
        st.pop();
        insert(st,ele);
        
        st.push(val);
        return;
    }
    
    
    stack<int> Reverse(stack<int> st){
        if(st.empty())
         {
             return st;
         }
         
         int temp = st.top();
         st.pop();
        st= Reverse(st);
         insert(st,temp);
         
    return st;
    }
