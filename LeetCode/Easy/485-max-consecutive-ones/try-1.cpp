/*
 * Problem #485: Max Consecutive Ones
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/8/2025, 3:17:43 PM
 * Link: https://leetcode.com/problems/max-consecutive-ones/
 */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>cons;
        int v=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                v++;
            }
            else{
                cons.push_back(v);
                v=0;
            }
        }
        cons.push_back(v);
        int max=cons[0];
        for(int i=1;i<cons.size();i++){
            if(cons[i]>max){
                max=cons[i];
            }
        }
        return max;
    }
};
