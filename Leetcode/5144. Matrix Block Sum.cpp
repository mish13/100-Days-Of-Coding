class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        vector< vector <int> > ans;
        for(int i=0;i<mat.size();i++)
        {
            vector <int> tmp;
            for(int j=0;j<mat[i].size();j++)
            {
                int sum = 0;
                for(int r=i-K;r<=i+K;r++)
                {
                    if(!(r>=0 && r<mat.size()))
                        continue;
                    for(int c=j-K;c<=j+K;c++)
                    {
                        if(!(c>=0 && c<mat[0].size()))
                            continue;
                        sum+=mat[r][c];
                    }
                }
                tmp.push_back(sum);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};
