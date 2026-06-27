/*
 * Problem #53: Maximum Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/27/2025, 11:42:14 AM
 * Link: https://leetcode.com/problems/maximum-subarray/
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ma=INT_MIN;long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>ma){
                ma=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return ma;
    }
};
