/*
 * Problem #33: Search in Rotated Sorted Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/8/2025, 4:07:09 PM
 * Link: https://leetcode.com/problems/search-in-rotated-sorted-array/
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        sort(nums.begin(),nums.end());
        while(low<=high){
            mid=(low+high)/2;
            if(target==nums[mid]){
                return mid;
                break;
            }
            if(target>nums[mid]){
                low=mid+1;
                continue;
            }
            if(target<nums[mid]){
                high=mid-1;
                continue;
            }
        }
        */
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};
