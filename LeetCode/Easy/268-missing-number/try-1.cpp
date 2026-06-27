/*
 * Problem #268: Missing Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/20/2025, 11:30:33 AM
 * Link: https://leetcode.com/problems/missing-number/
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }
        int ans;
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
