/*
 * Problem #976: Largest Perimeter Triangle
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/28/2025, 11:46:05 PM
 * Link: https://leetcode.com/problems/largest-perimeter-triangle/
 */

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int ans=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]<nums[i+1]+nums[i+2]){
                ans=max(ans,nums[i]+nums[i+1]+nums[i+2]);
            }
        }
        return ans;
    }
};
