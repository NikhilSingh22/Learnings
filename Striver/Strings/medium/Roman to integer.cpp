 
 int romanToInt(string s) { // we have used map to store the predefined roman value;
        map<char,int> mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});

        int sum =0;

        for(int i=s.size()-1;i>=0;i--)
        {
           if(i<=s.size()-2) // just taking for address i+1 should not overflow;
            { if(s[i]=='I' && s[i+1] =='V'||s[i]=='I' && s[i+1] =='X')
                sum =sum-2;
            else if(s[i]=='X' && s[i+1] =='L'||s[i]=='X' && s[i+1] =='C')
                sum=sum-20;
            else if(s[i]=='C' && s[i+1] =='D'||s[i]=='C' && s[i+1] =='M')
                sum=sum-200;}
            
            sum+=mp[s[i]];
        }
        
        return sum;
    }


// this is the better approach comparing if integer value of any roman is less than its previous one then it should be subtracted;

for(int i=s.size()-1;i>=0;i--)
        {
          if(mp[s[i]]<mp[s[i+1]])
              sum-=mp[s[i]];
          else
              sum+=mp[s[i]];
        }
