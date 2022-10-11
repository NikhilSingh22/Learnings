 void insert(stack<int> &st, int temp)
    {
        if(st.empty())
        {
            st.push(temp);
            return ;
        }
        
        int val = st.top();
        st.pop();
        insert(st,temp);
        st.push(val);
    }
    stack<int> Reverse(stack<int> st){
       if(st.size()==1)
       {
           return st;
       }
       
       int temp = st.top();
       st.pop();
       st = Reverse(st);
       insert(st,temp);
       
       return st;
    }
