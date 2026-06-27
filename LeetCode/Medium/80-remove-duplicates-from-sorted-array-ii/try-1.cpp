/*
 * Problem #80: Remove Duplicates from Sorted Array II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/25/2026, 9:44:53 AM
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int,int>h;
        vector<int>l;
        for(int i=0;i<nums.size();i++){
            h[nums[i]]++;
        }
        for(auto &it:h){
            if(it.second>2)it.second=2;
        }
        int ans=0;
        for(auto it:h){
            for(int i=0;i<it.second;i++){
                l.push_back(it.first);
            }
            ans+=it.second;
        }
        for(int i=0;i<l.size();i++){
            nums[i]=l[i];
        }
        // sort(nums.begin(),nums.end());
        return ans;
    }
};
