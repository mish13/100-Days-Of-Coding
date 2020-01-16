//Runtime: 8 ms, faster than 91.81% of C++ online submissions for Roman to Integer.
//Memory Usage: 8.5 MB, less than 58.82% of C++ online submissions for Roman to Integer.

class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                if(i+1<s.size() && (s[i+1]=='V' || s[i+1]=='X'))
                {
                    if(s[i+1]=='V')
                    {
                        ans+=4;
                        i++;
                    }
                    else
                    {
                        ans+=9;
                        i++;
                    }
                }
                else
                {
                    ans+=1;
                }
            }
            else if(s[i]=='X')
            {
                if(i+1<s.size() && (s[i+1]=='L' || s[i+1]=='C'))
                {
                    if(s[i+1]=='L')
                    {
                        ans+=40;
                        i++;
                    }
                    else
                    {
                        ans+=90;
                        i++;
                    }
                }
                else
                {
                    ans+=10;
                }
            }
            else if(s[i]=='C')
            {
                if(i+1<s.size() && (s[i+1]=='D' || s[i+1]=='M'))
                {
                    if(s[i+1]=='D')
                    {
                        ans+=400;
                        i++;
                    }
                    else
                    {
                        ans+=900;
                        i++;
                    }
                }
                else
                {
                    ans+=100;
                }
            }
            else if(s[i]=='V')
            {
                ans+=5;
            }
            else if(s[i]=='L')
            {
                ans+=50;
            }
            else if(s[i]=='D')
            {
                ans+=500;
            }
            else if(s[i]=='M')
            {
                ans+=1000;
            }
        }
        return ans;
    }
};
