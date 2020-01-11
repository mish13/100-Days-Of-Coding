//Runtime: 4 ms, faster than 51.55% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
//Memory Usage: 8.3 MB, less than 100.00% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0;
        while(n!=0)
        {
            prod*=(n%10);
            sum+=(n%10);
            n/=10;
        }
        return prod-sum;
    }
};
