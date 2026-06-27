/*
 * Problem #416: Partition Equal Subset Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/28/2026, 3:56:38 PM
 * Link: https://leetcode.com/problems/partition-equal-subset-sum/
 */

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
        }
        if(s%2!=0)return false;
        s=s/2;
        sort(nums.begin(),nums.end());
        bool dp[n][s+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<=s;j++){
                if(j==0)dp[i][j]=true;
                else if(i==0&&j>0)dp[i][j]=false;
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<=s;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n-1][s];
    }
};
