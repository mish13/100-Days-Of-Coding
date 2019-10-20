//Runtime: 4 ms, faster than 99.31% of C++ online submissions for Longest Substring Without Repeating Characters.
//Memory Usage: 9 MB, less than 98.01% of C++ online submissions for Longest Substring Without Repeating Characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int flag[128],mx=0;
        string ans="";
        int i=0,j=0;
        memset(flag,0,sizeof(flag));
        while(i<s.size())
        {
            if(flag[int(s[i])]==0)
            {
                if(i-j+1>mx)
                    mx=i-j+1;
                flag[int(s[i])]=1;
                i++;
                if(i>s.size()-1)
                    break;
            }
            else
            {
                while(j<i)
                {
                    if(s[j]!=s[i])
                    {
                        flag[s[j++]]--;
                    }
                    else
                    {
                        j++;
                        break;
                    }
                    
                }
                i++;
            }
        }
        return mx;
        
    }
};
