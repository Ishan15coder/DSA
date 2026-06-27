/*
 * Problem #209: Minimum Size Subarray Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/23/2025, 5:06:25 PM
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
                s-=nums[l];
                l++;
            }
            r++;
        }
        // l=n-1,r=n-1;
        // s=0;
        // while(r>=0){
        //     s+=nums[r];
        //     if(s>=target){
        //         mi=min(mi,l-r+1);
        //         s-=nums[l];
        //         l--;
        //     }
        //     r--;
        // }
        if(mi==INT_MAX)return 0;
        return mi;
    }
};
