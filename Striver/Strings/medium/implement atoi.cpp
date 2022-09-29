  int myAtoi(string s) {
        long sum = 0; 
        int i =0;
        int flag=0;
        int n = s.size();
        
        while(s[i]==' ')
        {
            i++; // removing spaces;
        }
        
        if(s[i]=='-')
        {
            flag =1;  // checking for negative number;
            i++;
        }
        else if(s[i]=='+')
        {
            flag = 0;  //checking for postive sign (defualt +)
            i++;
        }
        
        for(i;i<n;i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                sum = sum*10 + s[i]-48; 
                if(sum>=INT_MAX) break; // there is condition that why we are checking if sum greater than int max;
            }
            else 
                break;
            
        }
        
        if(flag == 1)
            sum = sum*(-1);
        
        if(sum<=INT_MIN)
            return INT_MIN;
        else if(sum>=INT_MAX)
            return INT_MAX;
    
        
        return (int)sum;
    }
