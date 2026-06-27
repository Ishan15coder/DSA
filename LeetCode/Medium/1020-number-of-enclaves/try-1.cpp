/*
 * Problem #1020: Number of Enclaves
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/2/2025, 3:21:58 PM
 * Link: https://leetcode.com/problems/number-of-enclaves/
 */

class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&(i==0||j==0||i==n-1||j==m-1)){
                    vis[i][j]=1;
                    q.push({i,j});
                }
                else{
                    vis[i][j]=0;
                }
            }
        }
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1&&!vis[nr][nc]){
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&!vis[i][j]){
                    cnt++;
                }
            }
        }
        return cnt;

    }
};
