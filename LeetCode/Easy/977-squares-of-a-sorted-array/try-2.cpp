/*
 * Problem #977: Squares of a Sorted Array
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 4/3/2025, 4:55:28 PM
 * Link: https://leetcode.com/problems/squares-of-a-sorted-array/
 */

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=pow(nums[i],2);
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
