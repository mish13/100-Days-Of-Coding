vector<int> Solution::wave(vector<int> &A) {
    vector<int> ans;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i+=2)
    {
        swap(A[i],A[i+1]);
    }
    return A;
}
