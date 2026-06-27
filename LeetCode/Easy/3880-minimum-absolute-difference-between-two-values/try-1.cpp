/*
 * Problem #3880: Minimum Absolute Difference Between Two Values
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/28/2026, 8:05:34 PM
 * Link: https://leetcode.com/problems/minimum-absolute-difference-between-two-values/
 */

class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int ans=INT_MAX;
        int ch=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==1&&nums[j]==2||nums[i]==2&&nums[j]==1){
                    ch=1;
                    ans=min(ans,abs(i-j));
                }
            }
        }
        if(!ch)ans=-1;
        return ans;
    }
};
