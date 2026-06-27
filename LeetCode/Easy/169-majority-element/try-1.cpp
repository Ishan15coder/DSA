/*
 * Problem #169: Majority Element
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/29/2025, 9:30:19 AM
 * Link: https://leetcode.com/problems/majority-element/
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        auto ma=hash.begin();
        for(auto it=hash.begin();it!=hash.end();++it){
            if(it->second>ma->second){
                ma=it;
            }
        }
        return ma->first;
    }
};
