/*
 * Problem #542: 01 Matrix
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/1/2025, 10:13:46 PM
 * Link: https://leetcode.com/problems/01-matrix/
 */

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>dist(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    vis[i][j]=0;
                    q.push({{i,j},0});
                }
                else vis[i][j]=1;
            }
        }
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int st=q.front().second;
            q.pop();
            dist[r][c]=st;
            for(int i=0;i<4;i++){
                int nr=r+drow[i];
                int nc=c+dcol[i];
                if(nr>=0 &&nr<n&&nc>=0&&nc<m&&vis[nr][nc]==1){
                    vis[nr][nc]=0;
                    q.push({{nr,nc},st+1});
                }
            }
        }
        return dist;
    }
};
