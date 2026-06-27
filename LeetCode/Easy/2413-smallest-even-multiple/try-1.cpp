/*
 * Problem #2413: Smallest Even Multiple
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/19/2025, 7:55:17 PM
 * Link: https://leetcode.com/problems/smallest-even-multiple/
 */

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0){
            return n;
        }
        else{
            return n*2;
        }
    }
};
