void solver(vector<vector<int>>&ans,vector<int>sol,vector<int>nums,int i)
    {
       
        ans.push_back(sol);
        

        for(int j = i ;j<nums.size();j++)
        {
            if(j>i&&nums[j]==nums[j-1])
            {
            continue;  
            }
            sol.push_back(nums[j]);
            solver(ans,sol,nums,j+1);
            sol.pop_back();
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>sol;
        solver(ans,sol,nums,0);
        return ans;
    }
