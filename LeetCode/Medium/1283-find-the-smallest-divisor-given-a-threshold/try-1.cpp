/*
 * Problem #1283: Find the Smallest Divisor Given a Threshold
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/11/2025, 12:18:17 PM
 * Link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
 */

class Solution {
public:
    int hp(vector<int>& nums,int m){
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=ceil((double)nums[i]/m);
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int mi=INT_MAX;
        int ma=INT_MIN;
        for(int i=0;i<nums.size();i++){
            ma=max(nums[i],ma);
            mi=min(nums[i],mi);
        }
        int low=1;
        int high=ma;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int p=hp(nums,mid);
            if(p<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
