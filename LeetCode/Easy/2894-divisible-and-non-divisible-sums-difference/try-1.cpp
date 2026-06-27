/*
 * Problem #2894: Divisible and Non-divisible Sums Difference
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/20/2025, 11:12:23 AM
 * Link: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
 */

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int nd=0;
        int d=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                d+=i;
            }
            else{
                nd+=i;
            }
        }
        return nd-d;
    }
};
