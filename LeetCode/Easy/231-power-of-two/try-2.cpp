/*
 * Problem #231: Power of Two
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 12/10/2024, 7:30:55 PM
 * Link: https://leetcode.com/problems/power-of-two/
 */

class Solution {
public:
    bool checkp(int n){
        if((n&(n-1))==0){
            return true;
        }
        return false;
    }
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        return checkp(n);
    }
};
