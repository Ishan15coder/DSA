/*
 * Problem #1732: Find the Highest Altitude
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/30/2025, 4:44:52 PM
 * Link: https://leetcode.com/problems/find-the-highest-altitude/
 */

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        
        for(int i=1;i<n;i++){
            gain[i]=gain[i-1]+gain[i];
        }
        gain.insert(gain.begin(),0);
        int ans=INT_MIN;
        for(int i=0;i<gain.size();i++){
            ans=max(gain[i],ans);
        }
        return ans;
    }
};
