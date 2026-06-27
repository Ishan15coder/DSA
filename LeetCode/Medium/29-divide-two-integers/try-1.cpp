/*
 * Problem #29: Divide Two Integers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/15/2025, 2:12:54 PM
 * Link: https://leetcode.com/problems/divide-two-integers/
 */

class Solution {
public:
    int divide(int dividend, int divisor) {
        long n = dividend;
if (n < 0) n = -n;
long d = divisor;
if (d < 0) d = -d;
        int sign=0;
        if(dividend>0&&divisor<0)sign=1;
        if(dividend<0&&divisor>0)sign=1;
        long q=0;
        while(n>=d){
        int cnt=0;
        while(n>=(d<<(cnt+1))){
            cnt+=1;
        }
        q+=1<<cnt;
        n-=d<<cnt;
        }
        if(q==(1<<31)&&sign==0)return INT_MAX;
        if(q==(1<<31)&&sign==1)return INT_MIN;
        if(sign==1)return -q;
        return q;
    }
};
