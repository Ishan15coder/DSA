/*
 * Problem #278: First Bad Version
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/4/2025, 1:59:33 PM
 * Link: https://leetcode.com/problems/first-bad-version/
 */

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans=0;
        while(n>0){
            if (isBadVersion(n)){
                ans=n;
            }
            else break;
            n--;
        }
        return ans;
    }
};
