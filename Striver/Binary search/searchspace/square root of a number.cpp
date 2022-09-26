long long int floorSqrt(long long int x) 
    {
       long long int lo = 0;
       long long int hi = x;
       while(lo<=hi)
       {
           long long int mid = lo+(hi-lo)/2;
           if(mid*mid == x)
            return mid;
           else if(mid * mid <x)
           lo = mid+1;
           else
           hi = mid-1;
       }
       return hi;
    }
