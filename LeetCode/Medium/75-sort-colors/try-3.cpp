/*
 * Problem #75: Sort Colors
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 8/28/2025, 11:13:42 PM
 * Link: https://leetcode.com/problems/sort-colors/
 */

class Solution {
public:
    void merge(int s,int mid,int e,vector<int>&nums){
        int i=s,j=mid+1;
        vector<int>ans;
        while(i<=mid&&j<=e){
            if(nums[j]<nums[i]){
                ans.push_back(nums[j]);
                j++;
            }
            else{
                ans.push_back(nums[i]);
                i++;
            }
        }
        while(i<=mid){
            ans.push_back(nums[i]);
            i++;
        }
        while(j<=e){
            ans.push_back(nums[j]);
            j++;
        }
        for(int i=0;i<ans.size();i++){
            nums[s+i]=ans[i];
        }
    }
    void merges(int s,int e,vector<int>&nums){
        int mid=(s+e)/2;
        if(s>=e)return;
        merges(s,mid,nums);
        merges(mid+1,e,nums);
        merge(s,mid,e,nums);
    }
    void sortColors(vector<int>& nums) {
        merges(0,nums.size()-1,nums);      
    }
};
