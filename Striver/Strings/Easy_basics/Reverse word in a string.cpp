//without split method;
string reverseWords(string s) 
    { 
        int ws = 0;
        for(int i = 0;i<s.size();i++ )
        {
            if(s[i]=='.')
            {
               reverse(s.begin()+ws,s.begin()+i);
               ws = i+1;
            }
            
        }
        reverse(s.begin()+ws,s.end());
       reverse(s.begin(),s.end());
       
       return s;
    }


// let code question in which word have extra spaces which should be removed while reversing the string of words;
    string reverseWords(string s) {
        
        reverse(s.begin(),s.end());
       int l = 0 , i = 0 ,r = 0, n = s.size();
        
        while(i<n)
        {
            while(i<n && s[i]!=' ')
                s[r++]=s[i++];  // just performing shifting if there is gap other wise simple copy
            
            if(l<r)
            {
                reverse(s.begin()+l, s.begin()+r);  // reversing each word
                if(r==n)break;
                s[r++]=' ';
                l=r;
            }
            i++; // ignoring space 
        }
        while(r>0 &&s[r-1]==' ')r--;
        s.resize(r); // reducing the size of string after removing extra spaces;
        return s;
    }
