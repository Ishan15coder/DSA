/*
 * Problem #1922: Count Good Numbers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/25/2025, 10:52:09 AM
 * Link: https://leetcode.com/problems/count-good-numbers/
 */

class Solution {
public:
    const long long mod=1e9+7;
    long long power(long long a,long long b){
        if(b==0)return 1;
        long long half=power(a,b/2);
        long long result=(half*half)%mod;
        if(b%2==1){
            result =(result*a)%mod;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd=n/2;
        if(n==1)return 5;
        long long a = power(4, odd);
        long long b = power(5, even);
        return (a * b) % mod;
    }
};
