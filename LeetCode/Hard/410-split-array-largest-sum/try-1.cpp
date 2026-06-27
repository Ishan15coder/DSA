/*
 * Problem #410: Split Array Largest Sum
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/22/2025, 12:17:24 PM
 * Link: https://leetcode.com/problems/split-array-largest-sum/
 */

class Solution {
public:
    int help(vector<int>& nums,int mid,int k){
        int j=1;
        int s=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i] > mid) return INT_MAX;
            if(s+nums[i]>mid){
                j++;
                if (j > k) return j;
               s=nums[i];
            }
            else{
                s+=nums[i];
            } 
        }
        return j;
    }
    int splitArray(vector<int>& nums, int k) {
        int ans=0;
        int sum=0;
        int mi=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mi=max(nums[i],mi);
        }
        if(k==1)return sum;
        int low=mi;
        int high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int p=help(nums,mid,k);
            if(p<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
