void solver(string &str, int &ans, int i)
    {
        if(i==str.size())
        {
            return;
        }
        
        if(str[i]<48 || str[i]>57)
        {
            ans = -1;
            return;
        }
        int x = str[i]-48;
        ans = ans* 10 + x;
        solver(str,ans,i+1);
    }
    
    int atoi(string str) {
        int ans = 0;
        int flag = 0;
        if(str[0] == '-')
        {
            solver(str,ans,1);
            flag =1;
        }
        else
         solver(str,ans,0);
       
       if(flag == 1 && ans< 0)
       {
           return ans;
       }
       else if(flag == 1 && ans > 0)
       return -1*ans;
       
       return ans;
    }
