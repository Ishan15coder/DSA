/*
 * Problem #27: Remove Element
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/9/2025, 11:24:41 PM
 * Link: https://leetcode.com/problems/remove-element/
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                ans.push_back(nums[i]);
            }
            
        }
        nums.clear();
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=val){
                nums.push_back(ans[i]);
            }
            
        }
        return nums.size();

    }
};
