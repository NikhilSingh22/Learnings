  int findFloor(vector<long long> v, long long n, long long x){
        int l=0;
        int h=n-1;
        int res=-1;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(v[m]==x)
             return m;
            else if(v[m]<x)
             {
                res=m;
                l=m+1;
             }
             else
             h=m-1;
        }
        
        return res;
    }
