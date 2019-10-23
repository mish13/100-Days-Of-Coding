int Solution::isPalindrome(int A) {
    if(A<0)
        return 0;
    if(A==0)
        return 1;
    string s="";
    while(!(A==0))
    {
        s = s + char((A%10)+'0');
        A/=10;
    }
    for(int i=0,j=s.size()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
            return 0;
    }
    return 1;
}
