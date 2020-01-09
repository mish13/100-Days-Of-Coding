class Solution {
public:
    string target;
    int dp[507][507];
    
    int rec(int l,int r)
    {
        if(l>=r)
            return 0;
        if(dp[l][r]!=-1)
            return dp[l][r];
        dp[l][r]=0;
        if(target[l]==target[r])
            dp[l][r]=rec(l+1,r-1);
        else
        {
            dp[l][r]=min(1+rec(l+1,r),1+rec(l,r-1));
        }
        return dp[l][r];
    }
    int minInsertions(string s) {
        target = s;
        memset(dp,-1,sizeof(dp));
        return rec(0,s.size()-1);
    }
};
