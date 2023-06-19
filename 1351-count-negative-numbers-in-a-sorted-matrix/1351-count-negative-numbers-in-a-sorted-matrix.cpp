class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int row = n-1;
        int col = 0;
        int count = 0;
        
        while(row>=0 && col<m){
            if(grid[row][col] < 0){
                row--;
                count += m - col;
            }
            else{
                col++;
            }
        }
        return count;
    }
};