
// this solution in gfg gives tle the optimized approach is using dp.
long long int solver(int arr[], int n , int sum,int res,int i)
	{
	    if(i == n)
	    {
	        if(res == sum)
	        {
	            return 1;
	        }
	        else 
	        {
	             return 0;
	        }
	    }
	    
	    
	    long long int l = solver(arr,n,sum,res+arr[i],i+1);
	    
	    long long int r = solver(arr,n,sum,res,i+1);
	    
	    return l+r;

	}
	
	int perfectSum(int arr[], int n, int sum)
	{
	    
        long long int ans = solver(arr,n,sum,0,0);
        return ans%1000000007;
	}
