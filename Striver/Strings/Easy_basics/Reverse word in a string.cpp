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
