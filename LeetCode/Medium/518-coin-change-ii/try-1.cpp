/*
 * Problem #518: Coin Change II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/5/2026, 4:42:24 PM
 * Link: https://leetcode.com/problems/coin-change-ii/
 */

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<long long>> dp(n + 1, vector<long long>(amount + 1, 0));
        
        for (int i = 0; i <= n; i++) dp[i][0] = 1;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= amount; j++) {
                if (coins[i-1] <= j)
                    dp[i][j] = dp[i-1][j] + dp[i][j - coins[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
                
                if (dp[i][j] > INT_MAX) dp[i][j] = INT_MAX;
            }
        }
        return (int)dp[n][amount];
    }
};
