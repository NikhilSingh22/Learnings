   int binarysearch(int arr[], int n, int k) {
       int l=0;
       int h=n-1;
       while(l<=h)
       {
           int m = l+(h-l)/2;
           if(k==arr[m])
            return m;
           else if(k<arr[m])
           h=m-1;
           else
           l=m+1;
       }
       return -1;
    }
