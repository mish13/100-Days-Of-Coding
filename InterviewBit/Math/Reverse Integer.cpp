int Solution::reverse(int A) {
    long long a = abs(A),b = INT_MAX,rev_a=0;
    while(a!=0)
    {
        rev_a = rev_a*10+(a%10);
        a/=10;
    }
    if(A<0)
    {
        b++;
        if(rev_a>b)
            return 0;
        else
            return int(rev_a*(-1));
    }
    else
    {
        if(rev_a>b)
            return 0;
        else
            return rev_a;
    }
}
