int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans =0;
    for(int i =0; i<A.size()-1;i++)
    {
        pair<int,int> x={A[i],B[i]},y={A[i+1],B[i+1]};
        ans+=max(abs(x.first-y.first),abs(x.second-y.second));
    }
    return ans;
}
