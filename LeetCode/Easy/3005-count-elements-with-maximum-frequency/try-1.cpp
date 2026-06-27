/*
 * Problem #3005: Count Elements With Maximum Frequency
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/23/2025, 10:13:10 PM
 * Link: https://leetcode.com/problems/count-elements-with-maximum-frequency/
 */

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>h;
        for(int i=0;i<nums.size();i++){
            h[nums[i]]++;
        }
        int ma=INT_MIN;
            int ans=0;                                   
        for(auto it:h){
            ma=max(it.second,ma);
        }
        for(auto it:h){
            if(it.second==ma)ans+=ma;
        }
        return ans;
    }
};
