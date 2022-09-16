ic:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int n=nums.size();
        int h = n-1;
        if(target>nums[n-1])
            return n;
        while(l<h)
        {
            int m = l+(h-l)/2;
            if(target == nums[m])
                return m;
           else if(target>nums[m])
                l=m+1;
            else
                h=m;
        }
        return l;
    }
