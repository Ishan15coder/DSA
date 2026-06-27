/*
 * Problem #3423: Maximum Difference Between Adjacent Elements in a Circular Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/12/2025, 10:17:31 AM
 * Link: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/
 */

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ma=0;
        int n=nums.size();
        for(int i=1;i<nums.size();i++){
            int p=abs(nums[i]-nums[i-1]);
            ma=max(ma,p);
        }
            int p=abs(nums[n-1]-nums[0]);
            ma=max(ma,p);
            return ma;
    }
};
