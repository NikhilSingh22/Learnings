 void solver(vector< vector<int>>&ans, vector<int>nums, vector<int>sol,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(sol);
            return;
        }

        sol.push_back(nums[i]);
        solver(ans,nums,sol,i+1);

        sol.pop_back();
        solver(ans,nums,sol,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>sol;
        
        solver(ans,nums,sol,0);
        return ans;
    }
