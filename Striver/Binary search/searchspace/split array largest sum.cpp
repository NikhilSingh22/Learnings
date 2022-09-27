// When negative elements are also present;
long long int maxSumWithK(long long int arr[], long long int n, long long int k) 
{
    long long int i = 0 , j = 0 ,maxSum = INT_MIN, sum = 0 , iwind = 0 , iwm = 0;
    
    while(j<n)
    {
        sum+=arr[j];
        if(j-i+1==k)
        {
            maxSum = max(maxSum,sum);
        }
        if(j-i+1>k)
        {
            iwind +=arr[i];
            i++;
            iwm = min(iwm,iwind);
            maxSum = max(maxSum,sum-iwm);
        }
        j++;
    }
    
    return maxSum;
}



/// when only positive elements are there
 bool splitFunc(vector<int>& nums, int mid, int m)
    {
        int sum = 0;
        int cnt=1;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]>mid) return false;
            if(nums[i]+sum>mid)
            {
                cnt++;
                sum=nums[i];
            }
            else
            {
                sum+=nums[i];
            }
        }
        
        if(cnt>m)
            return false;
        return true;
    }
    
    
    int splitArray(vector<int>& nums, int m) {
        int lo = *min_element(nums.begin(),nums.end());
        
        int hi = accumulate(nums.begin(),nums.end(),0);
        int res;
        while(lo<=hi)
        {
            int mid = (lo+hi)>>1;
            
            if(splitFunc(nums,mid,m))
            {
                res = mid;
                hi = mid-1;
            }
            else
            {
                lo = mid+1;
            }
        }
        return res;
    }
