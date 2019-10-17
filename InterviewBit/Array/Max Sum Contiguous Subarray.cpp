int Solution::maxSubArray(const vector<int> &A) {
    
    int current_max=0,global_max=0,mx=-100000000;
    
    for(int i=0;i<A.size();i++)
    {
        current_max+=A[i];
        if(mx<A[i])
            mx=A[i];
        if(current_max<0)
            current_max = 0;
        if(current_max>global_max)
            global_max = current_max;
    }
    if(global_max==0)
    {
        global_max=mx;
    }
    return global_max;
}
