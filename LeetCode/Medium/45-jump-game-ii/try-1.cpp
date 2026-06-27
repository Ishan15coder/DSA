/*
 * Problem #45: Jump Game II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/26/2025, 9:51:22 PM
 * Link: https://leetcode.com/problems/jump-game-ii/
 */

class Solution {
public:
    int jump(vector<int>& nums) {
        int r=0,l=0,far=0;
        int cnt=0;
        while(r<nums.size()-1){
            far=0;
            for(int i=l;i<=r;i++){
                far=max(i+nums[i],far);
            }
            l=r+1;
            cnt++;
            r=far;
        }
        return cnt;
    }
};
