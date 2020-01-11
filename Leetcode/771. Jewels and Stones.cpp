//Runtime: 4 ms, faster than 65.07% of C++ online submissions for Jewels and Stones.
//Memory Usage: 8.3 MB, less than 85.00% of C++ online submissions for Jewels and Stones.

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int cap[26],sml[26],cnt=0;
        memset(cap,0,sizeof(cap));
        memset(sml,0,sizeof(sml));
        for(int i=0;i<J.size();i++)
        {
            if(J[i]>='a' && J[i]<='z')
            {
                sml[J[i]-'a']++;
            }
            else
            {
                cap[J[i]-'A']++;
            }
        }
        for(int i=0;i<S.size();i++)
        {
            if(S[i]>='a' && S[i]<='z' && sml[S[i]-'a']>0)
            {
                cnt++;
            }
            else if(S[i]>='A' && S[i]<='Z' && cap[S[i]-'A']>0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
