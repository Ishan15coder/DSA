/*
 * Problem #3795: Minimum Subarray Length With Distinct Sum At Least K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 1/3/2026, 8:38:17 PM
 * Link: https://leetcode.com/problems/minimum-subarray-length-with-distinct-sum-at-least-k/
 */

class Solution {
public:
    int minLength(vector<int>& nums, int k) {
       unordered_map<int,int>a;
        long long l=0,r=0;
        int n=nums.size();
        long long mi=INT_MAX;
        long long su=0;
        while(r<n){
            if(a[nums[r]]==0)su+=nums[r];
            a[nums[r]]++;
            
            while(su>=k){
                mi=min(mi,r-l+1);
                a[nums[l]]--;
                if(a[nums[l]]==0)su-=nums[l];
                l++;
            }
            r++;
        }
        if(mi==INT_MAX)mi=-1;
        return mi;
    }
};
