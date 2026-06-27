/*
 * Problem #229: Majority Element II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/30/2025, 10:54:56 AM
 * Link: https://leetcode.com/problems/majority-element-ii/
 */

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>hash;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(auto it=hash.begin();it!=hash.end();it++){
            if(it->second>nums.size()/3){
                ans.push_back(it->first);
            }
        }
        return ans;

    }
};
