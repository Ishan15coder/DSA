/*
 * Problem #35: Search Insert Position
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/3/2025, 5:06:01 PM
 * Link: https://leetcode.com/problems/search-insert-position/
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=0;
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
                ans=mid-1;
            }
            if(nums[mid]<target){
                low=mid+1;
                ans=mid+1;
            }
            if(nums[mid]==target){
                return mid;
            }
        }
        if(ans<0){
            ans=0;
        }
        return low;
    }
};
