vector<vector<int> > Solution::solve(int A) {
    vector < vector <int> > ans;
    for(int n=0;n<A;n++)
    {
        vector <int> tmp;
        for(int k=0;k<=n;k++)
        {
            if(n==0 || k==0 || k==n || n==1)
            {
                tmp.push_back(1);
            }
            else if(k==1 || k==n-1)
            {
                tmp.push_back(n);
            }
            else
            {
                tmp.push_back(ans[n-1][k-1]+ans[n-1][k]);
            }
        }
        ans.push_back(tmp);
    }
    return ans;
}
