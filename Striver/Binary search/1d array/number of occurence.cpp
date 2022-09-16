int binary_search(int arr[],int n,int x,int flag)
    {
        int l=0;
        int h= n-1;
        int res = -1;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(arr[m]==x)
            {
                res = m;
                if(flag==0)
                {
                    h=m-1;
                }
                else
                {
                    l=m+1;
                }
            }
            else if(arr[m]<x)
            {
                l=m+1;
            }
            else
            {h=m-1;}
        }
        
        return res;
    }
    
    
	int count(int arr[], int n, int x) {
	    int cnt;
	    int first  = binary_search(arr,n,x,0);
	    int last = binary_search(arr,n,x,1);
	    
	    if(first == -1 || last == -1)
	    return 0;
	  
	    cnt = (last-first)+1;
	    return cnt;
	}
