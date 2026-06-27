/*
 * Problem #912: Sort an Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/28/2025, 11:01:18 PM
 * Link: https://leetcode.com/problems/sort-an-array/
 */

class Solution {
public:
    void merge(int s,int mid,int e,vector<int>&nums){
        int i=s,j=mid+1;
        vector<int>ans;
        while(i<=mid&&j<=e){
            if(nums[i]>nums[j]){
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
    vector<int> sortArray(vector<int>& nums) {
        merges(0,nums.size()-1,nums);
        return nums;
    }
};
