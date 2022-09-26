 long long calsum(vector<int>&nums,int threshold,int mid)
    {
        long long sum  = 0;
        for(int i = 0;i<nums.size();i++)
        {
            sum+=nums[i]/mid + ((nums[i]%mid)!=0);
        }
        
        return sum;
    }
    
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1;
        int hi  = *max_element(nums.begin(),nums.end());
        int res =0;
        if(threshold == nums.size())
            return hi;
        
        while(lo<=hi)
        {
            int mid = (lo+hi)>>1;
            
            if(calsum(nums,threshold,mid)<=threshold)
            {
                res = mid;
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return res;
    }
};
