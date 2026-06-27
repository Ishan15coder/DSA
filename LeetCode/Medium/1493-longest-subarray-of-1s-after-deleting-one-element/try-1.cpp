/*
 * Problem #1493: Longest Subarray of 1's After Deleting One Element
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/22/2025, 2:01:38 PM
 * Link: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/
 */

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0;
        int n=nums.size();
        int ma=0;
        vector<int>o;
       
        while(r<n){
            if(nums[r]!=1){
                o.push_back(r);
                if(o.size()>1){
                   l=o[0]+1;
                    o.erase(o.begin());
                }
            }
            
           
            ma=max(ma,r-l);
            r++;
        }
        return ma;
    }
};
