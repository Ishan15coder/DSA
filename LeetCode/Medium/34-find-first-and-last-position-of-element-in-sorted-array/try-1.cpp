/*
 * Problem #34: Find First and Last Position of Element in Sorted Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/6/2025, 9:27:23 PM
 * Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans={-1,-1};
        int low=0;
        int n=nums.size();
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){    
                if (nums[mid] == target) ans[0] = mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        low=0;
        high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){    
                high=mid-1;
            }
            else{
                if(nums[mid]==target)ans[1]=mid;
                low=mid+1;
            }
            
        }
        return ans;
        
    }
};
