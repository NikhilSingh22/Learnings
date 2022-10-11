void solver(vector<vector<int>> &ans,vector<int>sol,vector<int>A,int B,int i)
    {
        if(i==A.size())
        {
            if(B==0)
            {
                ans.push_back(sol);
            }
            return;
        }
        
        if(B>=A[i])
        {
        sol.push_back(A[i]);
        solver(ans,sol,A,B-A[i],i);
        sol.pop_back();
        }
        
        solver(ans,sol,A,B,i+1);
       
    }
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(),A.end()),A.end()); // removing the duplicate from the vector since we can already use element any no. of times.
        vector< vector<int>>ans;
        vector<int> sol;
        solver(ans,sol,A,B,0);
        return ans;
    }
