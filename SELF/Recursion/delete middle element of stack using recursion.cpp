void solve(stack<int>&st , int k)
    {
        if(k==1)
        {
            st.pop();
            return;
        }
        
        int temp = st.top();
        st.pop();
        solve(st,k-1);
        st.push(temp);
    }
    
    
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        if(s.empty())
         return;
         int k = sizeOfStack/2 +1;
         solve(s,k);
         return;
    }
