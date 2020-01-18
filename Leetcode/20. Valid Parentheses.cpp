//Runtime: 8 ms, faster than 58.49% of C++ online submissions for Valid Parentheses.
//Memory Usage: 8.6 MB, less than 72.09% of C++ online submissions for Valid Parentheses.

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(s[i]==')')
                {
                    if(!st.empty() && st.top()=='(')
                    {
                        st.pop();
                    }
                    else
                        return false;
                }
                if(s[i]=='}')
                {
                    if(!st.empty() && st.top()=='{')
                    {
                        st.pop();
                    }
                    else
                        return false;
                }
                if(s[i]==']')
                {
                    if(!st.empty() && st.top()=='[')
                    {
                        st.pop();
                    }
                    else
                        return false;
                }
            }
                
        }
        if(!st.empty())
            return false;
        return true;
        
    }
};
