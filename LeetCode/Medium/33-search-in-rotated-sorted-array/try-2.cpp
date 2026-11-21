/*
 * Problem #33: Search in Rotated Sorted Array
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 11/21/2026, 3:20:40 PM
 * Link: https://leetcode.com/problems/search-in-rotated-sorted-array/
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                return mid;
            }
            else{
                if(nums[l]<=nums[mid]){
                    if(nums[l]<=target&&nums[mid]>=target){
                        h=mid-1;
                    }
                    else{
                        l=mid+1;
                    }
                }
                else{
                    if(nums[mid]<=target&&nums[h]>=target){
                    l=mid+1;
                    }
                    else{
                        h=mid-1;
                    }
                }
            }
        }
        return -1;
    }
};
