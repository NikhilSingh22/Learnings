    
    int findBouq(vector<int>&bloomDay,long long mid,int k)
    {
        int pick = 0;
        int bouq = 0;
     for(int i = 0 ;i<bloomDay.size();i++)  
     {
         if(bloomDay[i]<=mid)
         {
             pick++;
             if(pick==k)
             {
                 bouq++;
                 pick=0;
             }
         }
         else
         {
             pick=0;
         }
         
     }
        return bouq;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int lo = 0,hi = *max_element(bloomDay.begin(),bloomDay.end());
        int res =0;
        if(m*k>bloomDay.size())
            return -1;
        while(lo<=hi)
        {
            long long mid =(long long) lo + (hi-lo)/2;
            
            if(findBouq(bloomDay,mid,k)>=m)
            {
                res = mid;
                hi = mid -1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return res;
    }
