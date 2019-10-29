int Solution::isPower(int A) {
    if(A==1)
        return 1;
    int lim = ceil(sqrt(A))+1;
    for(int i=2;i<=lim;i++)
    {
        if(A%i==0)
        {
            int tmp = A,cnt=0;
            while(tmp%i==0)
            {
                tmp/=i;
                cnt++;
            }
            if(tmp==1 && cnt>1)
                return 1;
        }
    }
    return 0;
}
