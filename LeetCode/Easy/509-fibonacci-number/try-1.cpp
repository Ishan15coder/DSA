/*
 * Problem #509: Fibonacci Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/29/2024, 9:45:24 PM
 * Link: https://leetcode.com/problems/fibonacci-number/
 */

class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        else if(n==2||n==1){
            return 1;
        }
        return fib(n-1)+fib(n-2);
    }
};
