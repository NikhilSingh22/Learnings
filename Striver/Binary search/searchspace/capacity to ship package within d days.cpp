int findHelper(vector<int>& weights , int mid , int d)
    {
        int sum =0,days =1;
        for(int i = 0;i<weights.size();i++)
        {
            if(sum+weights[i]>mid)
            {
                days++;
                if(weights[i]>mid)
                    return d+1; // we know that it is not possible with this value of mid to finish in d days because load is more than the capacity
                sum=weights[i];
            }
            else
            {
                sum+=weights[i];
            }
        }
        return days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = 1, hi = accumulate(weights.begin(),weights.end(),0);
        if(days == 1)
            return hi;
        while(lo<hi)
        {
            int mid = lo+(hi-lo)/2;
            
            if(findHelper(weights,mid,days)<=days)
            {
                hi = mid;
            }
            else
                lo=mid+1;
        }
        
        return lo;
    }
