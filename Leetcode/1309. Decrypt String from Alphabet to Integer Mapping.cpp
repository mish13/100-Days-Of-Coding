class Solution {
public:
    string freqAlphabets(string s) {
        queue <char> q;
        for(int i=0;i<s.size();i++)
        {
            if(i+2<s.size() && s[i+2]=='#')
            {
                int res = (s[i]-'0')*10+(s[i+1]-'0')-1;
                q.push('a'+res);
                i+=2;
            }
            else
            {
                q.push(s[i]-'0'+'a'-1);
            }
        }
        string ans = "";
        while(!q.empty())
        {
            ans = ans + q.front();
            q.pop();
        }
        return ans;
    }
};
