vector<int> Solution::plusOne(vector<int> &A) {
    int carry =0;
    reverse(A.begin(),A.end());
    while(A.size()>1 && A[A.size()-1]==0)
    {
        A.pop_back();
    }
    reverse(A.begin(),A.end());
    for(int i=A.size()-1;i>=0;i--)
    {
        if(A[i]+1==10)
        {
            carry =1;
            A[i]=0;
            continue;
        }
        else
        {
            carry = 0;
            A[i]++;
            break;
        }
    }
    if(carry==1)
    {
        reverse(A.begin(),A.end());
        A.push_back(1);
        reverse(A.begin(),A.end());
    }
    return A;
}
