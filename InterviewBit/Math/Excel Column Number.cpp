int Solution::titleToNumber(string A) {
    long long ans = 0,mul=1;
    for(int i=A.size()-1;i>=0;i--)
    {
        ans = ans+(A[i]-'A'+1)*mul;
        mul*=26;
    }
    return ans;
}
