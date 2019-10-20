//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Ugly Number.
//Memory Usage: 8.1 MB, less than 86.67% of C++ online submissions for Ugly Number.

class Solution {
public:
    bool isUgly(int num) {
        if(num<=0)
            return false;
        while(num%2==0)
            num/=2;
        while(num%3==0)
            num/=3;
        while(num%5==0)
            num/=5;
        if(num==1)
            return true;
        return false;
    }
};
