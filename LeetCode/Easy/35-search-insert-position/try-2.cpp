/*
 * Problem #35: Search Insert Position
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 9/4/2025, 2:48:52 PM
 * Link: https://leetcode.com/problems/search-insert-position/
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
                
            }
            if(nums[mid]<target){
                low=mid+1;
                
            }
            if(nums[mid]==target){
                return mid;
            }
        }
        
        return low;
    }
};
