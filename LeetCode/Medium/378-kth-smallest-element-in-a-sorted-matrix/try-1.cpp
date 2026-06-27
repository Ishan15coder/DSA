/*
 * Problem #378: Kth Smallest Element in a Sorted Matrix
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/4/2025, 2:27:27 PM
 * Link: https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
 */

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        vector<int>s;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                s.push_back(matrix[i][j]);
            }
        }
        sort(s.begin(),s.end());
        return s[k-1];
    }
};
