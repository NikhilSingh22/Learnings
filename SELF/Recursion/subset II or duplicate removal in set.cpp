void solver(vector<vector<int>>&ans, vector<int>sol,vector<int>nums,map<vector<int>,int>&mp,int i)
    {
        if(i>=nums.size())
        {
            if(mp.find(sol)!=mp.end())
            {
                mp[sol]++;
            }
            else
            {
                mp[sol]++;
                ans.push_back(sol);    
            }
            return;
        }

        sol.push_back(nums[i]);
        solver(ans,sol,nums,mp,i+1);
        sol.pop_back();
        solver(ans,sol,nums,mp,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>sol;
       sort(nums.begin(),nums.end());
        map<vector<int>,int>mp;
       solver(ans,sol,nums,mp,0);
       sort(ans.begin(),ans.end());
       return ans; 
    }
