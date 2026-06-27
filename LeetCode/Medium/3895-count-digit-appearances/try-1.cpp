/*
 * Problem #3895: Count Digit Appearances
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/11/2026, 8:12:50 PM
 * Link: https://leetcode.com/problems/count-digit-appearances/
 */

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int l=nums[i];
            while(l>0){
                int k=l%10;
                mp[k]++;
                l=l/10;
            }    
         }
        return mp[digit];
    }
};
