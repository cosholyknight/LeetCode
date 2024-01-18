class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(101, vector<int>(101));
        dp[0][0] = !obstacleGrid[0][0];
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        for (int i = 1; i < m; i++) {
            dp[i][0] = max(0, dp[i - 1][0] - obstacleGrid[i][0]);
        }
        for (int i = 1; i < n; i++) {
            dp[0][i] = max(0, dp[0][i - 1] - obstacleGrid[0][i]);
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = obstacleGrid[i][j] == 1 ? 0 : dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }
};
