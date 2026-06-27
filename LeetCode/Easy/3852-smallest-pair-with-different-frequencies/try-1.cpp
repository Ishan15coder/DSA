/*
 * Problem #3852: Smallest Pair With Different Frequencies
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/28/2026, 8:18:44 PM
 * Link: https://leetcode.com/problems/smallest-pair-with-different-frequencies/
 */

class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int,int>ho;
        int ans1=-1;
        int ans2=-1;
        for(int i=0;i<nums.size();i++){
            ho[nums[i]]++;
        }
        vector<pair<int,int>>h;
        for(auto it:ho){
            h.push_back({it.first,it.second});
        }
        int md=INT_MAX;
        for(int i=0;i<h.size();i++){
            for(int j=i+1;j<h.size();j++){
                if(abs(h[i].second-h[j].second)<md&&h[i].second!=h[j].second){
                    md=abs(h[i].second-h[j].second);
                    ans1=h[i].first;
                    ans2=h[j].first;
                    break;
                }
            }
            if(md<INT_MAX)break;
        }
        vector<int>ans;
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};
