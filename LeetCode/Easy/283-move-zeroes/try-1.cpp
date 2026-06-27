/*
 * Problem #283: Move Zeroes
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/1/2025, 3:24:00 PM
 * Link: https://leetcode.com/problems/move-zeroes/
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int zn=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zn++;
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<zn;i++){
            ans.push_back(0);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=ans[i];
        }
        
    }
};
