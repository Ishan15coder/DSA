/*
 * Problem #704: Binary Search
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/3/2025, 4:56:08 PM
 * Link: https://leetcode.com/problems/binary-search/
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high=nums.size()-1;
        int low=0;
        int mid;
        while(low<=high){
        mid=(low+high)/2;
        if(target>nums[mid]){
            low=mid+1;
        }
        if(target<nums[mid]){
            high=mid-1;
        }
        if(target==nums[mid]){
            return mid;
        }
        }
        return -1;
    }
};
