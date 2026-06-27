/*
 * Problem #136: Single Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/24/2025, 11:15:06 PM
 * Link: https://leetcode.com/problems/single-number/
 */

class Solution {
public:
    int singleNumber(vector<int>& arr) {
       int n = arr.size();
    for (int i = 0; i < n; i++) {
        int num = arr[i]; 
        int cnt = 0;        
        for (int j = 0; j < n; j++) {
            if (arr[j] == num)
                cnt++;
        }
        if (cnt == 1) return num;
    }
    return -1;
    }
};
