/*
 * Problem #154: Find Minimum in Rotated Sorted Array II
 * Difficulty: Hard
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 6/7/2025, 1:44:12 PM
 * Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
         while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } else if (nums[mid] < nums[high]) {
                high = mid;
            } else {
                high--;
            }
        }
        return nums[low];
    }
};
