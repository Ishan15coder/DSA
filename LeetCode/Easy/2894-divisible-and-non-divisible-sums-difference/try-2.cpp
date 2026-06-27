/*
 * Problem #2894: Divisible and Non-divisible Sums Difference
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 5/28/2025, 12:22:40 AM
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
