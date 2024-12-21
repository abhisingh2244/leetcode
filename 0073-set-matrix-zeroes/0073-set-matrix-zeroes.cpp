class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row =matrix.size(), col=matrix[0].size();
        vector<vector<int>> duplicate(row);
        for(int i=0;i<row;i++)
        {
        for(int j=0;j<col;j++)
        {
            //check if any element is equal to 0
            if(matrix[i][j]==0)
            {
                //Make replace all the element in column with some random no.
                for(int k=0;k<col;k++)
                { if(matrix[i][k]!=0)
                       matrix[i][k]=-999;
                }
            }
        
        }
        }
         for(int i=0;i<row;i++)
        {
        for(int j=0;j<col;j++)
        {
            //check if any element is equal to 0
            if(matrix[i][j]==0)
            {
                //Make replace all the element in row with some random no.
                for(int k=0;k<row;k++)
                { if(matrix[k][j]!=0)
                       matrix[k][j]=-999;
                }
            }
        
        }
        }
        for(int i=0;i<row;i++)
        {
        for(int j=0;j<col;j++)
        {
         if(matrix[i][j]==-999) matrix[i][j]=0;
        }}
    }
};