/*
 * Problem #930: Binary Subarrays With Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/17/2025, 3:23:38 PM
 * Link: https://leetcode.com/problems/binary-subarrays-with-sum/
 */

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int l=0,r=0;
        int n=nums.size();
        int s=0;
        int cnt1=0; 
        int cnt2=0; 

        while(r<n){
            s+=nums[r];
            while(s>goal){ 
                s-=nums[l];
                l++;
            }
            cnt1 += (r-l+1);
            r++;
        }

        if(goal-1 < 0) return cnt1;

        l=0; r=0; s=0;

        while(r<n){
            s+=nums[r];
            while(s>goal-1){
                s-=nums[l];
                l++;
            }
            cnt2 += (r-l+1);
            r++;
        }

        return cnt1 - cnt2;
    }
};

