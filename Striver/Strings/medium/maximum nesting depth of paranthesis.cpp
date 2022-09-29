// Input: s = "(1+(2*3)+((8)/4))+1"
// Output: 3
// Explanation: Digit 8 is inside of 3 nested parentheses in the string.

int maxDepth(string s) {
    
        int count = 0;
        int ans = 0;
        for(int i = 0 ;i<s.size();i++ )
        {
            if(s[i]=='(')
             {   count++;
             
                ans = max(ans,count);
             }
            else if(s[i]==')')
            {
                count--;
            }
        }
        
        return ans;
    }
