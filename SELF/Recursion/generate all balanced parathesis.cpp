void solver(vector<string>&ans,string sol,int open,int close)
    {
        if(open == 0 && close == 0)
        {
            ans.push_back(sol);
            return;
        }

        if(open!=0)
        {
            
            solver(ans,sol+'(',open-1,close);
        }

        if(close>open)
        {
            
            solver(ans,sol+')',open,close-1);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string sol="";
        
        solver(ans,sol,n,n);
        return ans;
    }
