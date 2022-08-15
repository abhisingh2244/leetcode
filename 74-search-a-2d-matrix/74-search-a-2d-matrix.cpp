class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int c=matrix[0].size(),f=0;
        for(int i=0;i<matrix.size();i++)
        {
        if(target>=matrix[i][0] and matrix[i][c-1]>=target)
        {
        for (int j=0;j<c;j++)
        {
        if(matrix[i][j]==target)
            f=1;
        }
            break;
        }
        }
    return f;
    }
};