bool isAnagram(string a, string b){
  if(a.size()!=b.size())
       return false;
        map<char,int>mp1;
        map<char,int>mp2;
       
       for(int i = 0;i<a.size();i++)
       {
           mp1[a[i]]++;
           mp2[b[i]]++;
       }
       
       return mp1==mp2;  // checking if both the maps are equal or not ;
}
