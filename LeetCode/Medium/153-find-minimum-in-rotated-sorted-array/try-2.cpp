/*
 * Problem #153: Find Minimum in Rotated Sorted Array
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 6/7/2025, 1:38:11 PM
 * Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mi=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[low]<=nums[mid]){
                mi=min(nums[low],mi);
                low=mid+1;
            }
            if(nums[high]>nums[mid]){
                mi=min(nums[mid],mi);
                high=mid-1;
            }
        }
        return mi;
    }
};
