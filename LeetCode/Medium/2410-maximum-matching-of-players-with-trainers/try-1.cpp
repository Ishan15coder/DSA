/*
 * Problem #2410: Maximum Matching of Players With Trainers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/24/2025, 6:10:10 PM
 * Link: https://leetcode.com/problems/maximum-matching-of-players-with-trainers/
 */

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n=players.size();int m=trainers.size();
        int i=0,j=0;
        int cnt=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        while(i<n&&j<m){
            if(players[i]<=trainers[j]){
                cnt++;
                i++;
            }
                j++;            
        }
        return cnt;
    }
};
