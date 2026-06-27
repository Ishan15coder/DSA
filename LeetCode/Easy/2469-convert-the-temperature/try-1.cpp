/*
 * Problem #2469: Convert the Temperature
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/17/2025, 10:57:51 PM
 * Link: https://leetcode.com/problems/convert-the-temperature/
 */

class Solution {
public:
    vector<double> convertTemperature(double c) {
        vector<double>ans;
        double k=c+273.15;
        double f=c*1.80+32.00;
        ans.push_back(k);
        ans.push_back(f);
        return ans;
    }
};
