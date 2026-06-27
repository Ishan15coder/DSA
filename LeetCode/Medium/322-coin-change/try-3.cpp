/*
 * Problem #322: Coin Change
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 5/22/2026, 3:00:08 AM
 * Link: https://leetcode.com/problems/coin-change/
 */

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int dp[n+1][amount+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=amount;j++){
                if(i==0)dp[i][j]=INT_MAX-1;
                if(i>0&&j==0)dp[i][j]=0;
            }
        }
        for(int j=0;j<=amount;j++){
            if(j%coins[0]==0)dp[1][j]=j/coins[0];
            else dp[1][j]=INT_MAX-1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[n][amount]==INT_MAX-1)return -1;
        return dp[n][amount];

    }
};
