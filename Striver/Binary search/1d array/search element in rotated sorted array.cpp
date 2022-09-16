int search(int arr[], int l, int h, int key){
       
        while(l<=h)
        {
            int m = l+(h-l)/2;
            
            if(arr[m]==key)
            return m;
            
           if(arr[l]<=arr[m])
            {
              if(arr[l]<=key &&key <= arr[m])
              {
                  h=m-1;
              }
              else 
              {
                  l=m+1;
              }
            }
            else if(arr[m]<=arr[h])
            {
                if(arr[h]>=key && key>=arr[m])
                {
                    l=m+1;
                }
                else
                {
                    h=m-1;
                }
            }
        }
        return -1;
    }
