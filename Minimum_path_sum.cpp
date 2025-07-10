#include <bits/stdc++.h>
using namespace std;

int minPathSum(vector<vector<int>> &grid){
    int m = grid.size(); //n is Row
    int n = grid[0].size(); // m is column
    
    vector<vector<int>> dp(n, vector<int>(m)); //creating another table of same size as grid.
    dp[0][0] = grid[0][0];
    
    // Filling first row
    for(int j = 1; j < n; j ++){
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }
    
    // Filling first column
    for(int i = 1; i < n; i ++){
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    // Filling the rest of dp table
    for(int i = 1; i < m; i ++){
        for(int j = 1; j < n; j ++){
            dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    
    return dp[m - 1][n - 1];
}
int main() {
  /* int rows, columns;
    cin >> rows;
    cin >> columns;

    vector<vector<int>> grid(rows, colums);
    
    for(int i = 0; i < rows; i ++){
        for(int j = 0; j < columns; j ++){
            cin >> grid[rows][columns];
        }
    }
    */
    vector<vector<int>> grid = {
        {1, 2, 1},
        {1, 4, 1},
        {3, 1, 1}
    };
    
    cout << "Minimum Path : " << minPathSum(grid) << endl;
    
return 0;
}
