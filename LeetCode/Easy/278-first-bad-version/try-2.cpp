/*
 * Problem #278: First Bad Version
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 9/4/2025, 2:05:55 PM
 * Link: https://leetcode.com/problems/first-bad-version/
 */

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long ans=0;
        long long low=1;
        long long high=n;
        
        while(high>=low){
            long long mid=(high+low)/2;
            if(isBadVersion(mid)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
