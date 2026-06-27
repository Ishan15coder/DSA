/*
 * Problem #152: Maximum Product Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/4/2025, 9:05:27 PM
 * Link: https://leetcode.com/problems/maximum-product-subarray/
 */

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long p=INT_MIN;
        long long pre=1,suff=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(pre==0)pre=1;
            if(suff==0)suff=1;
            pre=pre*nums[i];
            suff=suff*nums[n-i-1];
            long long j=max(pre,suff);
            p=max(p,j);
        }
        
        return p;

    }
};
