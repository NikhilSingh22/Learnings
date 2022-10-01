 int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        int l = 0,h=n-1;
        
        if(n==1)
            return nums[0];
        if(nums[l]!=nums[l+1])
            return nums[l];
        if(nums[h]!=nums[h-1])
            return nums[h];
        
        while(l<h)
        {
            int m = l+(h-l)/2;
            if(nums[m]!=nums[m+1]&& nums[m]!=nums[m-1])
                return nums[m];
            else if(nums[m]==nums[m-1])
            {
                if((m-1)%2==0) // if single element is in left side then m-1%2 will become odd. if not it will be even
                    l=m+1;
                else 
                    h=m;
                
            }
            else if(nums[m]==nums[m+1])
            {
                if(m%2==0)  // we are on first occurenece and still it is even so single element is not is left half .
                    l=m+1;
                else 
                    h=m;
            }
        }
        return nums[l];
    }
