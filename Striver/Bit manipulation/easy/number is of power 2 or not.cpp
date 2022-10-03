 bool isPowerofTwo(long long n){
        
       int long long ans = 1;
       while(ans<=n)
       {
           if(ans==n)
           return true;
           
           ans = ans<<1;
       }
    return false;
    }
