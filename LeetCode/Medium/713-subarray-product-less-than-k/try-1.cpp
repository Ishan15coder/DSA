/*
 * Problem #713: Subarray Product Less Than K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/23/2025, 6:54:51 PM
 * Link: https://leetcode.com/problems/subarray-product-less-than-k/
 */

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0,r=0,n=nums.size();
        int p=1;
        if(k<=1)return 0;
        int cnt=0;
        while(r<n){
            p=p*nums[r];
            while(p>=k){
                    p=p/nums[l];
                l++;
                }
            
                cnt+=abs(r-l+1);
            

            r++;
        }
        return cnt;
    }
};
