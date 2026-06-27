/*
 * Problem #646: Maximum Length of Pair Chain
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/4/2025, 7:45:19 PM
 * Link: https://leetcode.com/problems/maximum-length-of-pair-chain/
 */

class Solution {
public:
    static bool compare(vector<int>a,vector<int>b){
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int ans=1;
        int n=pairs.size();
        sort(pairs.begin(),pairs.end(),compare);
        int current=pairs[0][1];
        for(int i=1;i<n;i++){
            if(pairs[i][0]>current){
                ans+=1;
                current=pairs[i][1];
            }
        }
        return ans;
    }
};
