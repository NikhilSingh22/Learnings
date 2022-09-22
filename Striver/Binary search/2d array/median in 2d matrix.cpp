  int ElementsLessOrEqualTo(vector<int>&rows,int mid)  // checking all number less than mid to find a median
    {
        int l = 0;
        int h= rows.size()-1;
        while(l<=h)
        {
            int md = (l+h)>>1;
            if(rows[md]<=mid)   // l is the index which provides numbers which are less than  or equal to mid;
            l=md+1;
            else
            h=md-1;
        }
        return l;
    }


    int median(vector<vector<int>> &matrix, int r, int c){
        int low =1;
        int high=2000; // limit of numbers given in question that can be the element of the 2d array
        while(low<=high)
        {
            int mid = (low+high)>>1;
            int cnt = 0;
            
            for(int i = 0 ;i<r;i++)
            {
                cnt+= ElementsLessOrEqualTo(matrix[i],mid);  // counting the total numbers which are less than mid(not an index a range);
            }
            
            if(cnt<=(r*c)/2)  // if total number less than mid is less than matrix size by 2 than it is not median 
             low=mid+1;
            else 
             high = mid-1;
        }
        return low;
    }
