// Interation method

void bubbleSort(int arr[], int n)
    {

        for(int i = 0 ;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp =arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }



// Recursive method
void bubbleSort(int arr[], int n)
    {

        if(n<0)
         return;
        
        for(int i =0 ;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        bubbleSort(arr,n-1);
    }
