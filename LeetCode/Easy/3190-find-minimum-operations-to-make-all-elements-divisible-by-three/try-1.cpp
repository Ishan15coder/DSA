/*
 * Problem #3190: Find Minimum Operations to Make All Elements Divisible by Three
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/20/2025, 11:24:44 AM
 * Link: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
 */

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int ops=0;
        for(int i=0;i<n;i++){
            if(nums[i]%3==0){
                continue;
            }
            else if((nums[i]+1)%3==0){
                nums[i]=nums[i]+1;
                ops++;
            }
            else if((nums[i]-1)%3==0){
                nums[i]=nums[i]-1;
                ops++;
            }
            }
            return ops;
    }
};
