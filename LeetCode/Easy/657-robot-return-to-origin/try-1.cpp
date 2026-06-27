/*
 * Problem #657: Robot Return to Origin
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/5/2026, 4:56:46 PM
 * Link: https://leetcode.com/problems/robot-return-to-origin/
 */

class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0,d=0,l=0,r=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U')u++;
            if(moves[i]=='D')d++;
            if(moves[i]=='L')l++;
            if(moves[i]=='R')r++;
        }
        if(u==d&&l==r)return true;
        return false;
    }
};
