/*
 * Problem #1004: Max Consecutive Ones III
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/16/2025, 3:30:29 PM
 * Link: https://leetcode.com/problems/max-consecutive-ones-iii/
 */

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;int r=0;
        int n=nums.size();
        int le=0,ma=INT_MIN;
        int j=k;int z=0;
        vector<int>ze;
        while(r<n){
            if(nums[r]!=1){
               ze.push_back(r);
            if(ze.size()>k){
                l = ze.front() + 1;
                ze.erase(ze.begin());
                // ze.push_back(r);
            }
            } 
            le=r-l+1;
            ma=max(le,ma);
            r++;
        }
        return ma;
    }
};
