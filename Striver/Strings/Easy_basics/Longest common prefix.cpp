string longestCommonPrefix (string arr[], int n)
    {
        int m = arr[0].size();
        int pos = -1;
        string str = "";
        for(int i = 0;i<m;i++)
        {
            char ch = arr[0][i];
            for(int j = 1;j<n;j++)
            {
                if(arr[j][i]!=ch)
                {
                    pos = i;
                    break;
                }
            }
            if(pos!=-1)
            {
                str = arr[0].substr(0,pos);
                break;
            }
            else if(i == m-1)
            {
                str = arr[0];
            }
            
        }
        
        if(pos==0)
        return "-1";
        
        return str;
    }
