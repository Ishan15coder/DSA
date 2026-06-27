/*
 * Problem #785: Is Graph Bipartite?
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/5/2025, 6:22:25 PM
 * Link: https://leetcode.com/problems/is-graph-bipartite/
 */

class Solution {
public:
    bool dfs(int i,vector<int>&color,vector<vector<int>>&adj,int col){
        color[i]=col;
        for(auto it:adj[i]){
            if(color[it]==-1){
                if(dfs(it,color,adj,!col)==false)return false;
            }
            else if(color[it]==col)return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        // int p=graph.size();
        // vector<int>adj[p];
        // for(int i=0;i<graph.size();i++){
        //     for(int j=0;j<graph[i].size();j++){
        //         if(graph[i][j]==1){
        //             adj[i].push_back(j);
        //             adj[j].push_back(i);
        //         }
        //     }
        // }
        int n=graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(dfs(i,color,graph,0)==false)return false;
            }
        }
        return true;
    }
};
