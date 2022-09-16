pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr,arr+n);
     pair<int,int>mp;
    int l =0;
    int h=n-1;
    int ceil=-1;
    int floor=-1;
    while(l<=h)
    {
        int m = l+(h-l)/2;
        if(arr[m]==x)
        {
            floor = ceil =arr[m];
            return make_pair(floor,ceil);
        }
        else if(arr[m]<x)
        {
            floor=arr[m];
            l=m+1;
        }
        else
        {
            ceil=arr[m];
            h=m-1;
        }
    }
   
    mp=make_pair(floor,ceil);
    return mp;
}
