/*
 * Problem #88: Merge Sorted Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/5/2025, 11:15:03 AM
 * Link: https://leetcode.com/problems/merge-sorted-array/
 */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums2[i]!=0){
            ans.push_back(nums2[i]);
            }
        }
        for(int i=0;i<m;i++){
            ans.push_back(nums1[i]);
            
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            nums1[i]=ans[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};
