string largestOddNumber(string num) {
        string str ="";
        int n = num.size();
        
        for(int i=n-1 ; i>=0 ;i--)
        {
             int n = (int)num[i]; // converting a character in int
                 if(n&1==1)
                 {
                     str = num.substr(0,i+1);
                     break;
                 }
        }
        return str;
    }
