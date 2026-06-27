/*
 * Problem #1423: Maximum Points You Can Obtain from Cards
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/18/2025, 9:59:03 PM
 * Link: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
 */

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,r=0,n=cardPoints.size();
        int s=0;
        int ma=INT_MIN;
        int to=0;
        
        for(int i=0;i<n;i++){
            to+=cardPoints[i];
        }
        if(n==k)return to;
        while(r<n){
            s+=cardPoints[r];
            if(r-l+1==n-k){
                ma=max(to-s,ma);
                s-=cardPoints[l];
                l++;
            }
            r++;
        }
        return ma;
    }
};
