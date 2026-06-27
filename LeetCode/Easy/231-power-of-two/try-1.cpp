/*
 * Problem #231: Power of Two
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/29/2024, 9:41:09 PM
 * Link: https://leetcode.com/problems/power-of-two/
 */

class Solution {
public:
    bool checkp(int n){
        while(n>1){
            if(n%2!=0){
                return false;
            }
            n=n/2;           
        }
        return true;
    }
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        return checkp(n);
    }
};
