string Solution::convertToTitle(int A) {
    string s="";
    while(A!=0)
    {
        if(A%26==0)
        {
            s = s+"Z";
            A--;
        }
        else
        {
            s = s+char('A'+int(A%26-1));
        }
        A/=26;
    }
    reverse(s.begin(),s.end());
    return s;
}
