/*
 * Problem #1672: Richest Customer Wealth
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/2/2024, 4:00:56 PM
 * Link: https://leetcode.com/problems/richest-customer-wealth/
 */

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        
        int k=accounts.size();
            for(int i=0;i<k;i++){
                int sum=0;
                int p=accounts[i].size();
                for(int j=0;j<p;j++){
                    sum+=accounts[i][j];
                }
                if(sum>max){
                    max=sum;
                }
            }

        return max;
    }
};
