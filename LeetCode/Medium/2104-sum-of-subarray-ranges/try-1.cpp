/*
 * Problem #2104: Sum of Subarray Ranges
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/14/2026, 9:46:30 PM
 * Link: https://leetcode.com/problems/sum-of-subarray-ranges/
 */

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans=0;

        for(int i=0;i<nums.size();i++){
        int mi=INT_MAX;
        int ma=INT_MIN;
        mi=min(nums[i],mi);
        ma=max(nums[i],ma);
            for(int j=i+1;j<nums.size();j++){
                
              mi=min(nums[j],mi);
              ma=max(nums[j],ma);
            ans+=(ma-mi);

            }
        }
        return ans;
    }
};
