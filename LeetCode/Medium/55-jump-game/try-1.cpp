/*
 * Problem #55: Jump Game
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/25/2025, 8:05:34 PM
 * Link: https://leetcode.com/problems/jump-game/
 */

class Solution {
public:
    bool canJump(vector<int>& nums) {
       
       
        int x=0;
        for(int i=0;i<nums.size();i++){
           if(i>x)return false;

            x=max(x,i+nums[i]);
            if(x>=nums.size()-1)return true;
        }
        
        return true;
    }
};
