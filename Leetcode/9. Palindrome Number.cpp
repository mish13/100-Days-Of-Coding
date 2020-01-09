//Runtime: 12 ms, faster than 73.22% of C++ online submissions for Palindrome Number.
//Memory Usage: 8 MB, less than 100.00% of C++ online submissions for Palindrome Number.

class Solution {
public:
    bool isPalindrome(int x) {
        string s="";
        if(x<0)
            return false;
        while(x!=0)
        {
            s = s+char (x%10+'0');
            x/=10;
        }
        for(int i=0,j=s.size()-1;i<s[i]/2;i++,j--)
        {
            if(s[i]==s[j])
                continue;
            return false;
        }
        return true;
    }
};
