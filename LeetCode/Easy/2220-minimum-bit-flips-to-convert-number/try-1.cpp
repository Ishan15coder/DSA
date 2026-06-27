/*
 * Problem #2220: Minimum Bit Flips to Convert Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/15/2025, 2:24:01 PM
 * Link: https://leetcode.com/problems/minimum-bit-flips-to-convert-number/
 */

class Solution {
public:
    int minBitFlips(int start, int goal) {
    int p=start^goal;
    int cnt=0;
        while(p>0){
            if(p%2==1)cnt++;
            p=p/2;
        }        
    return cnt;
    }
};
