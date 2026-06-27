/*
 * Problem #643: Maximum Average Subarray I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/23/2025, 3:26:44 PM
 * Link: https://leetcode.com/problems/maximum-average-subarray-i/
 */

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int n=nums.size();
        double s=0;
        double ma=INT_MIN;
        while(r<n){
            s+=nums[r];
            if(r-l+1==k){
                double avg=s/k;
                ma=max(ma,avg);
                s-=nums[l];
                l++;
            }
            r++;
        }
        return ma;
    }
};
