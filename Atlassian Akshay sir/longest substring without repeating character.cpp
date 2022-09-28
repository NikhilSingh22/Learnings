 int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int n = s.size();
        int res =0;
        map<char,int>mp;
        while(j<n)
        {
            mp[s[j]]++;
            if(j-i+1 == mp.size())
            {
                res = max(res,j-i+1);
            }
            else if(j-i+1>mp.size())
            {
               while(mp.size()<j-i+1)
               { mp[s[i]]--;
                
                if(mp[s[i]]==0)
                    mp.erase(s[i]);
                i++;
               }
            }
            
            j++;
        }
        
        return res;
    }
