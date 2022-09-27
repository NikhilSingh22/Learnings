int findKthPositive(vector<int>& arr, int k) {
        int lo = 0, hi = arr.size()-1;
        
        while(lo<=hi)
        {
            int mid = (lo+hi)>>1;
            
            if(arr[mid]-(1+mid)<k)
            {
                lo=mid+1;
            }
            else
            {
                hi = mid-1;
            }
        }
        return (lo+k);
    }
