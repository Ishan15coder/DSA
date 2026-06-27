/*
 * Problem #26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/8/2025, 2:23:55 PM
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        vector<int>ans;
        int i=0;
        for(int p:s){
            nums[i++]=p;
        }
        return i;
    }
};
