// basically it is one to one mapping 

bool areIsomorphic(string str1, string str2)
    {
        
       if(str1.size()!=str2.size())
        return 0;
       map<char,int>mp1;
       map<char,int>mp2;
       
       for(int i = 0;i<str1.size();i++)
        {
            mp1[str1[i]] = i+1;  // we are just putting i+1 for 1 base indexing 
            mp2[str2[i]]= i+1;
        }
        
        
        for(int i=0;i<str1.size();i++)
        {
            if( mp1[str1[i]] != mp2[str2[i]]) // if any key in the map is repeated so there index will no be equal and not isomorphic;
            return 0;
        }
    return 1;
    }
