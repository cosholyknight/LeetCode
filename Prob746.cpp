class Solution {
public:
    int dp[1001];
    int minCostClimbingStairs(vector<int>& cost) {
        dp[0] = 0;
        dp[1] = cost[0];
        for (int i = 2; i <= cost.size(); i++) {
            dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i - 1];
        }
        return min(dp[cost.size() - 1], dp[cost.size()]);
    }
};
