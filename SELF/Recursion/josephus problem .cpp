    void solver(vector<int>&arr,int k ,int index, int &ans)
    {
        if(arr.size()==1)
        {
            ans = arr[0];
            return;
        }
        
        
        index = (index+k)%(arr.size());
        arr.erase(arr.begin()+index);
        solver(arr,k,index,ans);
    }
    int josephus(int n, int k)
    {
       vector<int>arr(n);
       int ans;
       
       for(int i = 0;i<n;i++)
       {
           arr[i]= i+1;
       }
       k=k-1;
       solver(arr,k,0,ans);
       
       return ans;
    }
