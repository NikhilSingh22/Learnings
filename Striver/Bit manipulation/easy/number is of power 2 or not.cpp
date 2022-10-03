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



// optimized approach
 bool isPowerofTwo(long long n){
        return (n!=0) && ((n & (n-1))==0);   // if n == 0 return false || n & (n-1) == 1 return false;
    }
