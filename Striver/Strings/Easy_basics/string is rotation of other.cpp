 bool areRotations(string s1,string s2)
    {
      
       if(s1.size()==s2.size() && (s1+s1).find(s2)!=string::npos)
       return true;
       else
       return false;
    }

// string :: npos gives the end of the string we are checking if the find value gives the end of string index that means string is not present in parent string
// so return false;
