//Runtime: 4 ms, faster than 98.41% of C++ online submissions for Find Numbers with Even Number of Digits.
//Memory Usage: 8.8 MB, less than 100.00% of C++ online submissions for Find Numbers with Even Number of Digits.

class Solution {
        bool isEven(int n)
        {
            if (n==0)
                return false;
            int cnt = 0;
            while(n!=0)
            {
                cnt^=1;
                n/=10;
            }
            if(cnt&1==1)
                return false;
            return true;
        }
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(isEven(nums[i]))
                cnt++;
        }
        return cnt;
    }
};
