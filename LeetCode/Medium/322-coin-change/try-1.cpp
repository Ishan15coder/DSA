/*
 * Problem #322: Coin Change
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/5/2026, 7:09:34 PM
 * Link: https://leetcode.com/problems/coin-change/
 */

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        int dp[n+1][amount+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=amount;j++){
                if(i==0)dp[i][j]=INT_MAX-1;
                else if(i>0&&j==0)dp[i][j]=0;
            }
        }
        for(int j=1;j<=amount;j++){
            if(j%coins[0]==0)dp[1][j]=j/coins[0];
            else dp[1][j]=INT_MAX-1;
        }
        for(int i=2;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        if(dp[n][amount]==INT_MAX-1)dp[n][amount]=-1;
        return dp[n][amount];
    }
};
