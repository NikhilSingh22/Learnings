void solver(vector<string>&ans,string sol,string s,int i)
    {
        if(i==s.size())
        {
            
            ans.push_back(sol);
            return;
        }

        if(s[i]>=48 && s[i]<=57)
        {
            sol.push_back(s[i]);
            solver(ans,sol,s,i+1);
        }
        else
        {
            sol.push_back(tolower(s[i]));
            solver(ans,sol,s,i+1);
            sol.pop_back();
            sol.push_back(toupper(s[i]));
            solver(ans,sol,s,i+1); 
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string sol="";

        solver(ans,sol,s,0);

        return ans;
    }
