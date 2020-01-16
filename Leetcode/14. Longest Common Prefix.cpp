//Runtime: 32 ms, faster than 5.67% of C++ online submissions for Longest Common Prefix.
//Memory Usage: 22.6 MB, less than 6.45% of C++ online submissions for Longest Common Prefix.

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        string ans = strs[0];
        for(int i=1;i<strs.size();i++)
        {
            string tmp = "";
            for(int j=0;j<strs[i].size() && j<ans.size();j++)
            {
                if(ans[j]==strs[i][j])
                {
                    tmp = tmp+strs[i][j];
                }
                else
                    break;
            }
            ans = tmp;
        }
        return ans;
    }
};
