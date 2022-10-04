void selectionSort(int arr[], int n)
    {
        int idx;
       for(int i = 0;i<n;i++)
       {
           idx = i;
           for(int j = i+1;j<n;j++)
           {
               if(arr[j]<arr[idx])
                idx = j;
           }
           
           if(idx!=i)
           {
               swap(arr[idx],arr[i]);
           }
       }
    }
