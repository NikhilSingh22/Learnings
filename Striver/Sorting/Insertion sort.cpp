// iterative method
void insertionSort(int arr[], int n)
    {
        int i , temp , j;
        for(i=1;i<n;i++)
        {
            temp =arr[i];
            j=i-1;
            while(j>=0 && arr[j]>temp)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
    }



// recursive method
 void insertionSort(int arr[], int n)
    {
        if(n<=1)
            return ;
        
        insertionSort(arr,n-1);
        
        int temp = arr[n-1];
        int j = n-2;
        
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
