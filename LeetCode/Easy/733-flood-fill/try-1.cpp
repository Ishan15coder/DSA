/*
 * Problem #733: Flood Fill
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/30/2025, 7:46:45 PM
 * Link: https://leetcode.com/problems/flood-fill/
 */

class Solution {
public:
    void dfs(vector<vector<int>>& image,vector<vector<int>>&ans, int sr, int sc, int color,int ini,vector<int>&dr,vector<int>&dc){
        ans[sr][sc]=color;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nr=sr+dr[i];
            int nc=sc+dc[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&ans[nr][nc]!=color&&image[nr][nc]==ini){
                dfs(image,ans,nr,nc,color,ini,dr,dc);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans=image;
        vector<int>dr={-1,0,1,0};
        vector<int>dc={0,1,0,-1};
        int ini=image[sr][sc];
        dfs(image,ans,sr,sc,color,ini,dr,dc);
        return ans;
    }
};
