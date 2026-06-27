/*
 * Problem #3708: Longest Fibonacci Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/11/2025, 8:44:23 PM
 * Link: https://leetcode.com/problems/longest-fibonacci-subarray/
 */

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        if(nums.size()==1)return 1;
        if(nums.size()==2)return 2;
        int ans=2;
        int l=0,r=2;
        int n=nums.size();
        long long a=0;
        int b=0;

        while(r<n){
            if(nums[r]==nums[r-1]+nums[r-2]){
                b=r-l+1;
                ans=max(b,ans);
            }
            else{
                l=r-1;
            }
            r++;
        }
              return ans;
    }
};
