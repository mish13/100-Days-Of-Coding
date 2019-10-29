//improved in the branch

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector <vector <int> > result;
        for(int j=0; j<matrix.size();j++)
        {
            vector <int> tmp;
            for(int i=matrix[j].size()-1; i>=0;i--)
            {
                tmp.push_back(matrix[i][j]);
            }
            result.push_back(tmp);
        }
        for(int i=0; i<matrix.size();i++)
        {
            vector <int> tmp;
            for(int j=0; j<matrix[i].size();j++)
            {
                matrix[i][j]=result[i][j];
            }
        }
    }
};
