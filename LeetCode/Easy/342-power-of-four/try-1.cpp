/*
 * Problem #342: Power of Four
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/15/2025, 1:29:26 PM
 * Link: https://leetcode.com/problems/power-of-four/
 */

class Solution {
public:
    bool isPowerOfFour(int n) {
        while(n>1){
            if(n%4!=0)break;
            n=n/4;
        }
        if(n==1)return true;
        else return false;
    }
};
