 vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int cs = 0 , ce = m-1;  
        while(cs<=ce)
        {
            int maxrow =0;
            int mid = cs+(ce-cs)/2;   // peforming binary search in selecting the columns on which we have to check the peak element
            for(int i = 0 ;i<n;i++)
            {
                if(mat[maxrow][mid]<mat[i][mid])
                    maxrow=i;   // taking the row index of the highest element of the selected column
            }
            
            if((mid==0||mat[maxrow][mid]>mat[maxrow][mid-1])&&(mid==m-1|| mat[maxrow][mid]>mat[maxrow][mid+1]))
            {
                return {maxrow,mid};   
            }
            
            else if(mid>0 && mat[maxrow][mid]<mat[maxrow][mid-1])
                ce=mid-1; 
            else
                cs = mid +1;
        }
        
        return {-1,-1};
    }
