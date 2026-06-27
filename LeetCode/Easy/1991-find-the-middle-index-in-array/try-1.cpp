/*
 * Problem #1991: Find the Middle Index in Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/30/2025, 5:18:44 PM
 * Link: https://leetcode.com/problems/find-the-middle-index-in-array/
 */

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>l(n);
        l[0]=nums[0];
        vector<int>r(n);
        r[nums.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            l[i]=l[i-1]+nums[i];
        }
        for(int j=nums.size()-2;j>=0;j--){
            r[j]=r[j+1]+nums[j];
        }
        int i=0,j=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(l[i]==r[i])return i;
        }
        return -1;
    }
};
