// brute force

void solver(vector<vector<int>>&ans,vector<int>sol,vector<int>nums,int k, int n,int i)
    {
        if(n==0 || i>= nums.size())
        {   
            if(sol.size()==k && n==0)
                ans.push_back(sol);
            return;
        }

        sol.push_back(nums[i]);
        solver(ans,sol,nums,k,n-nums[i],i+1);
        sol.pop_back();
        solver(ans,sol,nums,k,n,i+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        if(k>=n)
        {
            return {};
        }
        vector<vector<int>>ans;
        vector<int>sol;
        vector<int>nums={1,2,3,4,5,6,7,8,9};
        solver(ans,sol,nums,k,n,0);
        return ans;
    }



//without creating nums array 
void solver(vector<vector<int>>&ans,vector<int>sol,int nums,int k, int n)
    {
        if(n==0 || nums >9)
        {   
            if(sol.size()==k && n==0)
                ans.push_back(sol);
            return;
        }

        sol.push_back(nums);
        solver(ans,sol,nums+1,k,n-nums);
        sol.pop_back();
        solver(ans,sol,nums+1,k,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        if(k>=n)
        {
            return {};
        }
        vector<vector<int>>ans;
        vector<int>sol;
       int nums=1;
        solver(ans,sol,nums,k,n);
        return ans;
    }

