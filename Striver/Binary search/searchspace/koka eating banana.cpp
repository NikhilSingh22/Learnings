 long findhelper(vector<int> &piles , int mid)
    {
        long sum = 0;
        
        for(int i = 0 ;i<piles.size();i++)
        {
            sum+=(piles[i]/mid)+((piles[i]%mid)!=0); // adding the no. of hours require for each element i.e. piles[i]
        }
        return sum;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
    int lo =1 , hi = *max_element(piles.begin(),piles.end()); // as we know the banana eating speed will be less than or equal to maximum in the array
    int res = 0;
    while(lo<=hi)
    {
        int mid = (lo+hi)>>1;
        
        if(findhelper(piles,mid)<=h) //checking with mid(speed) if it possible to eat all banans with speed mid in hours h
        {
            res = mid;
            hi = mid-1;
        }  
        else
        {
            lo = mid+1;
        }
    }
    return res;        
}
