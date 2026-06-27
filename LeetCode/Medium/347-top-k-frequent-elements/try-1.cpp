/*
 * Problem #347: Top K Frequent Elements
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/28/2025, 10:02:25 PM
 * Link: https://leetcode.com/problems/top-k-frequent-elements/
 */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<int>ans;
        while(k--){
        int ma=-1;
        int a;
        for(auto it:hash){
            if(it.second>ma){
            a=it.first;
            ma=max(ma,it.second);
            }
        }
        ans.push_back(a);
        hash.erase(a);
        }
        return ans;
    }
};
