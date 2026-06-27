/*
 * Problem #74: Search a 2D Matrix
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/26/2025, 7:52:32 PM
 * Link: https://leetcode.com/problems/search-a-2d-matrix/
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};
