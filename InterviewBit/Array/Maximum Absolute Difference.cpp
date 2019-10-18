int Solution::maxArr(vector<int> &A) {
    vector <int> b,c;
    for(int i=0;i<A.size();i++)
    {
        b.push_back(A[i]+i);
        c.push_back(A[i]-i);
    }
    int mx_b=INT_MIN,mx_c=INT_MIN,mn_b=INT_MAX,mn_c=INT_MAX;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]>mx_b)
            mx_b=b[i];
        if(c[i]>mx_c)
            mx_c=c[i];
        if(b[i]<mn_b)
            mn_b=b[i];
        if(c[i]<mn_c)
            mn_c=c[i];
    }
    return max(abs(mx_b-mn_b),abs(mx_c-mn_c));
}
