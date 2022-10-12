void solver(vector<int>&ans,vector<int>arr,int N,int sum,int i)
    {
        if(i==N)
        {
            ans.push_back(sum);
            return;
        }
        
        sum+=arr[i];
        solver(ans,arr,N,sum,i+1);
        
        sum-=arr[i];
        solver(ans,arr,N,sum,i+1);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        sort(arr.begin(),arr.end());
        vector<int>ans;
        solver(ans,arr,N,0,0);
        return ans;
    }
