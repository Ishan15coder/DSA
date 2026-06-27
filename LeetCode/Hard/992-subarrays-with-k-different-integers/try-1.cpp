/*
 * Problem #992: Subarrays with K Different Integers
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/18/2025, 10:42:05 PM
 * Link: https://leetcode.com/problems/subarrays-with-k-different-integers/
 */

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        int l=0,r=0,n=nums.size();
        int cnt1=0;
        while(r<n){
            hash[nums[r]]++;
                while(hash.size()>k){
                    hash[nums[l]]--;
                    if (hash[nums[l]] == 0)hash.erase(nums[l]);
                    l++;
                }
            
                cnt1+=r-l+1;
            
            r++;
        }
        r=0;
        unordered_map<int,int>has;
        int cnt2=0;
        l=0;
        while(r<n){
            has[nums[r]]++;
                while(has.size()>k-1){
                    has[nums[l]]--;
                    if (has[nums[l]] == 0)has.erase(nums[l]);
                    l++;
                }
            
                cnt2+=r-l+1;
            
            r++;
        }
        return cnt1-cnt2;
    }
};
