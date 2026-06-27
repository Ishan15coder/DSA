/*
 * Problem #3289: The Two Sneaky Numbers of Digitville
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/31/2025, 11:02:23 PM
 * Link: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/
 */

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        // unordered_map<int>h;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
            }
            if(ans.size()==2)break;
        }
        return ans;
    }
};
