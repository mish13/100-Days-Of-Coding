//Runtime: 4 ms, faster than 54.17% of C++ online submissions for Defanging an IP Address.
//Memory Usage: 8.2 MB, less than 100.00% of C++ online submissions for Defanging an IP Address.

class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for(int i=0;i<address.size();i++)
        {
            if(address[i]=='.')
            {
                ans = ans+"[.]";
            }
            else
            {
                ans = ans+address[i];
            }
        }
        return ans;
    }
};
