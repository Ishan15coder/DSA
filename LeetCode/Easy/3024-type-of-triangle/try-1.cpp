/*
 * Problem #3024: Type of Triangle
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/19/2025, 10:49:18 PM
 * Link: https://leetcode.com/problems/type-of-triangle/
 */

class Solution {
public:
    string triangleType(vector<int>& nums) {
        string e="equilateral";
        string s="scalene";
        string i="isosceles";
        string n="none";
        sort(nums.begin(),nums.end());
        if(nums[0]+nums[1]<=nums[2]){
            return n;
        }
        if(nums[0]==nums[1]&&nums[1]==nums[2]){
            return e;
        }
        if(nums[0]==nums[1]||nums[1]==nums[2]||nums[0]==nums[2]){
        return i;
        }
       
            return s;
        
    }
};
