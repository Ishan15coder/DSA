/*
 * Problem #1248: Count Number of Nice Subarrays
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/17/2025, 10:39:20 PM
 * Link: https://leetcode.com/problems/count-number-of-nice-subarrays/
 */

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l=0,r=0;
        int n=nums.size();
        int s=0;
        int cnt1=0; 
        int cnt2=0; 

        while(r<n){
            s+=nums[r]%2;
            while(s>k){ 
                s-=nums[l]%2;
                l++;
            }
            cnt1 += (r-l+1);
            r++;
        }

        if(k-1 < 0) return cnt1;

        l=0; r=0; s=0;

        while(r<n){
            s+=nums[r]%2;
            while(s>k-1){
                s-=nums[l]%2;
                l++;
            }
            cnt2 += (r-l+1);
            r++;
        }

        return cnt1 - cnt2;
    
    }
};
