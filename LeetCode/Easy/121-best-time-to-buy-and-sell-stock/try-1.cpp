/*
 * Problem #121: Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/3/2025, 10:35:38 AM
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mind=p[0];
        int profit=0;
        int cost;
        for(int i=1;i<p.size();i++){
            cost=p[i]-mind;
            profit=max(profit,cost);
            mind=min(p[i],mind);
        }
        return profit;
        
    }
};
