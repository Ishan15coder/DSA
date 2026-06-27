/*
 * Problem #162: Find Peak Element
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/6/2025, 10:55:06 PM
 * Link: https://leetcode.com/problems/find-peak-element/
 */

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                if(nums[i]>nums[i+1]){
                return i;
                }
            }
            else if(i==(nums.size()-1)){
                if(nums[i]>nums[i-1])return i;
            }
        else{
            if(nums[i-1]<nums[i]&&nums[i]>nums[i+1]){
                return i;
            }
        }
        }
        return 0;
    }
};
