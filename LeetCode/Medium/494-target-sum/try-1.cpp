/*
 * Problem #494: Target Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/3/2026, 3:29:19 PM
 * Link: https://leetcode.com/problems/target-sum/
 */

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int s=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
    if(s < abs(target) || (s + target) % 2) return 0;
        int s1=(s+target)/2;
        int dp[n+1][s1+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=s1;j++){
                if(i==0 &&j>0)dp[i][j]=0;
                else if(j==0)dp[i][j]=1;
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=0;j<=s1;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][s1];
    }
};
