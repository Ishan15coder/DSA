/*
 * Problem #1920: Build Array from Permutation
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/15/2025, 6:45:25 PM
 * Link: https://leetcode.com/problems/build-array-from-permutation/
 */

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        int k=nums.size();
        for(int i=0;i<k;i++){
            int p=nums[i];
            ans.push_back(nums[p]);
        }
        return ans;
    }
};
