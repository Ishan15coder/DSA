/*
 * Problem #1578: Minimum Time to Make Rope Colorful
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/3/2025, 8:07:33 PM
 * Link: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
 */

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        string p=colors;
        for(int i=0;i<colors.length()-1;i++){
            if(p[i]==p[i+1]){
                int l=min(neededTime[i],neededTime[i+1]);
                neededTime[i+1]=max(neededTime[i],neededTime[i+1]);
                ans+=l;
            }
        }
        return ans;
    }
};
