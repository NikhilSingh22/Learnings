 void solver(vector<string>&ans,string sol,int one , int zero, int n)
    {
        if(n==0)
        {
            ans.push_back(sol);
            return;
        }
        
        if(n>0)
        {
            solver(ans,sol+'1',one+1,zero,n-1);
        }
        if(one>zero)
        {
            solver(ans,sol+'0',one,zero+1,n-1);
        }
    }
	vector<string> NBitBinary(int N)
	{
	    vector<string> ans;
	    string sol="";
	    
	    solver(ans,sol,0,0,N);
	    
	    return ans;
	}
