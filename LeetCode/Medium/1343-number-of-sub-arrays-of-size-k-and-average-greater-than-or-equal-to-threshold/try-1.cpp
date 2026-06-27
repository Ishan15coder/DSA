/*
 * Problem #1343: Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/22/2025, 3:53:30 PM
 * Link: https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
 */

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l=0;
        int r=0;
        int n= arr.size();
        int cnt=0;
        int s=0;
        while(r<n){
            s+=arr[r];
            if(r-l+1==k){
            if(s/k>=threshold){
                cnt++;
            }
            s-=arr[l];
            l++;
            }
            r++;
        }
        return cnt;
    }
};
