string removeOuterParentheses(string s) {
        
        string str;
        int count = 0;
        int rs = 0;
        
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]=='(')
                count++;
            else
                count--;
            
            if(count==0)
            {
              for(int j = rs+1 ;j<i;j++)
              {
                  str+=s[j];
              }
                rs=i+1;
            }
        }
        
        return str;
    }



//without nested for loop
string removeOuterParentheses(string S) {
        int count = 0;
        std::string str;
        for (char c : S) {
            if (c == '(') {
                if (count++) { // ??
                    str += '(';
                }
            } else {
                if (--count) {
                    str += ')';
                }
            }
        }
        return str;
    }
