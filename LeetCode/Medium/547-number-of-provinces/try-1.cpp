/*
 * Problem #547: Number of Provinces
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/26/2025, 10:16:29 AM
 * Link: https://leetcode.com/problems/number-of-provinces/
 */

class Solution {
public:
    void dfs(int no,vector<int>&vis,vector<int>adj[]){
        vis[no]=1;
        for(auto it:adj[no]){
            if(vis[it]!=1){
                dfs(it,vis,adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if (isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }                
            }
        }

        vector<int>vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(vis[i]!=1){
                cnt++;
                dfs(i,vis,adj);
            }
        }
        return cnt;
    }
};
