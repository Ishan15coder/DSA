/*
 * Problem #2257: Count Unguarded Cells in the Grid
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/2/2025, 3:49:56 PM
 * Link: https://leetcode.com/problems/count-unguarded-cells-in-the-grid/
 */

class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        vector<vector<char>>grid(m,vector<char>(n,'u'));
        queue<pair<int,int>>q;
        for(int i=0;i<guards.size();i++){
                grid[guards[i][0]][guards[i][1]]='g';
                q.push({guards[i][0],guards[i][1]});
        }
        for(int i=0;i<walls.size();i++){
                grid[walls[i][0]][walls[i][1]]='w';
        }
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                while(nr>=0&&nr<m&&nc>=0&&nc<n&&grid[nr][nc]!='g'&&grid[nr][nc]!='w'){
                    if (grid[nr][nc] == 'u') grid[nr][nc]='s';
                    nr += dr[i];
                    nc += dc[i];
                }
            }
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='u')cnt++;
            }
        }
        return cnt;
    }
};
