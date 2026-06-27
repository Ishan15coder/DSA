/*
 * Problem #2799: Count Complete Subarrays in an Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/7/2026, 12:27:20 AM
 * Link: https://leetcode.com/problems/count-complete-subarrays-in-an-array/
 */

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        unordered_map<int,int>m;
        int n=nums.size();
        int l=0,r=0;
        int cnt=0;
        while(r<n){
            m[nums[r]]++;
            if(m.size()==mp.size())cnt++;
            if(r==n-1){
                m.clear();
                r=l;
                l++;
            }
            r++;
        }
        return cnt;
    }
};
