 void solver(vector<string>&ans,string sol, string s, int i)
	    {
	        if(i == s.size())
	        {
	            if(sol.size()>0)
	               ans.push_back(sol);
	            return;
	        }
	        sol.push_back(s[i]);
	        solver(ans,sol,s,i+1);
	        sol.pop_back();
	        solver(ans,sol,s,i+1);
	    }
		vector<string> AllPossibleStrings(string s){
		    if(s.size()==0 || s.size()==1)
		     return {s};
            vector<string> ans;
            string sol;
            solver(ans,sol,s,0);
            sort(ans.begin(),ans.end());
            return ans;
		}
