/*
 * Problem #122: Best Time to Buy and Sell Stock II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/25/2026, 10:10:35 AM
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int prev=-1;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(prices[i]<=prices[i+1]){
                if(prev==-1){
                prev=prices[i];
                }
            }
            else if(prev!=-1){
                ans+=prices[i]-prev;
                prev=-1;
            }
        }
        if(prices[n-1]>prev &&prev!=-1)ans+=prices[n-1]-prev;
        return ans;
    }
};
