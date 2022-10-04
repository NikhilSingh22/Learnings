 void quickSort(int arr[], int low, int high)
    {
        if(low<high)
        {
            int p = partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int x = rand()%(high-low+1)+low;
       swap(arr[x],arr[high]);
       int pivot = arr[high];
       int i = low-1;
       for(int j = low ;j<high;j++)
       {
           if(arr[j]<pivot)
           {
               i++;
               swap(arr[i],arr[j]);
           }
       }
       swap(arr[i+1],arr[high]);
       return i+1;
    }
