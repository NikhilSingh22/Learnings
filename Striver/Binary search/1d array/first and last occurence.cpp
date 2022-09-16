int binary_search(int arr[],int n , int x , int flag)
{
    int l = 0;
    int h=n-1;
    int res=-1;
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
        {
            h=m-1;
        }
    }
    
    return res;
}
vector<int> find(int arr[], int n , int x )
{
    vector<int>ans;
    int floor = binary_search(arr,n,x,0);
    int ceil = binary_search(arr,n,x,1);
    ans.push_back(floor);
    ans.push_back(ceil);
    return ans;
}
