int binary_search(vector<int>& nums, int target, int flag)
    {
        int n = nums.size();
        int l = 0;
        int h = n-1;
        int res=-1;
        while(l<=h)
        {
            int m = l+(h-l)/2;
             
            if(nums[m]==target)
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
            else if(nums[m]<target)
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
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first=binary_search(nums,target,0);
        int last = binary_search(nums,target,1);
        vector<int>ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
        
    }
