/*
 * Problem #209: Minimum Size Subarray Sum
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 8/23/2025, 5:09:44 PM
 * Link: https://leetcode.com/problems/minimum-size-subarray-sum/
 */

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,n=nums.size();
        int s=0;
        int mi=INT_MAX;
        while(r<n){
            s+=nums[r];
            while(s>=target){
                mi=min(mi,r-l+1);
                if(mi==1)return 1;
                s-=nums[l];
                l++;
            }
            r++;
        }
        if(mi==INT_MAX)return 0;
        return mi;
    }
};
