/*
 * Problem #70: Climbing Stairs
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/11/2026, 10:49:11 PM
 * Link: https://leetcode.com/problems/climbing-stairs/
 */

class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
