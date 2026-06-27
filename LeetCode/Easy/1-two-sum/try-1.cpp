/*
 * Problem #1: Two Sum
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/31/2024, 10:25:52 PM
 * Link: https://leetcode.com/problems/two-sum/
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int k=nums.size();
        for(int i=0;i<k;i++){
            for(int j=i+1;j<k;j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
            }
        }
        return{};
    }
};
