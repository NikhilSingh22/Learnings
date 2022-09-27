 bool allocation(int arr[], int n , int mid , int m)
    {
        int stu=1;
        int sum = 0;
        for(int i = 0 ;i<n;i++)
        {
            if(arr[i]>mid)
            {
                return false;
            }
            if(sum+arr[i]>mid)
            {
                stu++;
                sum=arr[i]; // that after adding a[i] becoming greater so we set sum to that number for next check;
            }
            else
            {
                sum+=arr[i];
            }
        }
        
        if(stu>m)
        {
            return false;
        }
     return true;
    }
    
    
    
    int findPages(int A[], int N, int M) 
    {
        int lo = *min_element(A,A+N);
        int hi = accumulate(A,A+N,0);
        int res=-1;
        
        if(M>N)
        {
            return -1;
        }
        while(lo<=hi)
        {
            int mid = (lo+hi)>>1;
            
            if(allocation(A,N,mid,M))
            {
                res = mid;
                hi = mid-1;
            }
            else
            {
                lo = mid+1;
            }
        }
        
        return res;
    }
