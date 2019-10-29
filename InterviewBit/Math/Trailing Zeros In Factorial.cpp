int Solution::trailingZeroes(int A) {
    long long mul=5;
    int ans=0;
    while(A/mul!=0)
    {
        ans+=(A/mul);
        mul*=5;
    }
    return ans;
}
