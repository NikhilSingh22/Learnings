 void solver(vector<string>&ans,string sol,string s,int i)
    {
        if(i==s.size())
        {
            ans.push_back(sol);
            return;
        }
        
        
        
        // string op1 = sol;
        // string op2 = sol;
        
        
        // if(i<s.size())
        //     op1+=" ";
        // op1.push_back(s[i]);
        // solver(ans,op1,s,i+1);
        
        // op2.push_back(s[i]);
        // solver(ans,op2,s,i+1);
        
        
    
        if(i<s.size())
            sol+=" ";
        sol.push_back(s[i]);
        solver(ans,sol,s,i+1);
        
        sol.pop_back();
        sol.pop_back();
        sol.push_back(s[i]);
        solver(ans,sol,s,i+1);
        
        
        
    }
    vector<string> permutation(string s){
        vector<string> ans;
        string sol;
        sol.push_back(s[0]);
        solver(ans,sol,s,1);
        
        return ans;
    }
