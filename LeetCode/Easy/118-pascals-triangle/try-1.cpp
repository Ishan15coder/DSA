/*
 * Problem #118: Pascal's Triangle
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/4/2025, 9:23:31 AM
 * Link: https://leetcode.com/problems/pascals-triangle/
 */

class Solution {
public:
    vector<int>gr(int r){
        long long ans=1;
        vector<int>a;
        a.push_back(1);
        for(int col=1;col<r;col++){
            ans=ans*(r-col);
            ans=ans/col;
            a.push_back(ans);
        }
        return a;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            vector<int>temp=gr(i);
            ans.push_back(temp);
        }
        return ans;
    }
};
