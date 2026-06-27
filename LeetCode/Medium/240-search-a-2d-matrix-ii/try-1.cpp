/*
 * Problem #240: Search a 2D Matrix II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/3/2025, 7:47:56 PM
 * Link: https://leetcode.com/problems/search-a-2d-matrix-ii/
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==t){
                    return true;
                }
            }
        }
        return false;
        
    }
};
