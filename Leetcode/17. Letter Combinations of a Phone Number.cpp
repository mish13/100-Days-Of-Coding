//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Letter Combinations of a Phone Number.
//Memory Usage: 8.9 MB, less than 18.57% of C++ online submissions for Letter Combinations of a Phone Number.

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,string> mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        queue <string> q;
        q.push("");
        for(int i=0;i<digits.size();i++)
        {
            string s = mp[char(digits[i])];
            while(1)
            {
                string frnt = q.front();
                if(frnt.size()>i)
                    break;
                q.pop();
                for(int j=0;j<s.size();j++)
                {
                    q.push(frnt+s[j]);
                }
            }
        }
        vector <string> ans;
        if(digits.size()==0)
            return ans;
        while(!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};
