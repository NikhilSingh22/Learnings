 void solver(vector<vector<int>>&ans, vector<int>sol,vector<int>candidates,int target,int i)
    {
        if(target == 0)
        {
            ans.push_back(sol);
            return;
        }

        for(int j = i;j<candidates.size();j++)
        {
            if(j>i && candidates[j]==candidates[j-1])continue;
            if(candidates[j]>target) break;
            
            sol.push_back(candidates[j]);
            solver(ans,sol,candidates,target-candidates[j],j+1);
            sol.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>sol;
        solver(ans,sol,candidates,target,0);
        return ans;
    }
