vector<int> Solution::getRow(int A) {
    
    vector < vector<int> > vt;
    for(int n=0;n<=A;n++)
    {
        vector <int> tmp;
        for(int k=0;k<=n;k++)
        {
            if(k==0 || n==0 || n==1 || k==n)
                tmp.push_back(1);
            else if(k==1 || k==n-1)
                tmp.push_back(n);
            else
                tmp.push_back(vt[n-1][k-1]+vt[n-1][k]);
        }
        vt.push_back(tmp);
    }
    return vt[A];
}
