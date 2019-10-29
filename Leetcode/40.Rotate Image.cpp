//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotate Image.
//Memory Usage: 9 MB, less than 90.24% of C++ online submissions for Rotate Image.

//improved in the branch

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i+1;j<matrix[0].size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    
        for(int i=0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
