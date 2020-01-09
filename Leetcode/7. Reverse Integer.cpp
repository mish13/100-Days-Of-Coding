//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Integer.
//Memory Usage: 8.2 MB, less than 93.33% of C++ online submissions for Reverse Integer.

class Solution {
public:
    long long reverse(long long x) {
        long long ans = 0;
        bool flag = true;
        if(x<0)
        {
            flag = false;
            x = abs(x);
        }
        while(x!=0)
        {
            ans = ans*10ll+(x%10);
            x/=10;
        }
        if(!flag)
        {
            ans*=-1;
            if(ans<INT_MIN)
                ans = 0;
        }
        if(ans>INT_MAX)
            ans = 0;
        return ans;
    }
};
