int peakElement(int arr[], int n)
    {
       int l = 0;
       int h = n-1;
       
       while(l<h)
       {
           int m = l+(h-l)/2;
           if(m>0 && m<n-1)
           {
               if(arr[m]>=arr[m-1]&& arr[m]>=arr[m+1])
                    return m;
                else if(arr[m+1]>arr[m-1])
                {
                    l=m+1;
                }
                else
                {
                    h=m-1;
                }
           }
           else if(m==0)
           {
               if(arr[0]>arr[1])
                return 0;
               else
                return 1;
           }
           else if(m==n-1)
           {
               if(arr[n-1]>arr[n-2])
               return n-1;
               else 
               return n-2;
           }
       }
       return l;
    }
