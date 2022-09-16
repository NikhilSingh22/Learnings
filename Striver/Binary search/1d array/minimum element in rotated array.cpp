int binary_search(int arr[],int n)
    {
        int l =0;
        int h= n-1;
        while(l<h)
        {
            int m = l+(h-l)/2;
          
            if(arr[m]>arr[h])
            {
                l=m+1;
                
            }
            else 
            {
                h=m;
            }
        }
        return arr[l];
    }
    
    int findMin(int arr[], int n){
       int mini = binary_search(arr,n);
       return mini;
    }
