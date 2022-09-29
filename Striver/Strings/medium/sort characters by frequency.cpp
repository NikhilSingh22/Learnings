 string frequencySort(string s) {
        map<char,int> mp;
        priority_queue<pair<int,char>> pq;
        string str="";
        
        for(int i = 0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});  // first we want frequency then character
        }
        
        while(!pq.empty())
        {
            int count = pq.top().first;
            char ch = pq.top().second;
             pq.pop();
           
            while(count--)
            {
                str +=ch;
            }
          
        } 
        return str;
    }
