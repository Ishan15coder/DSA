/*
 * Problem #455: Assign Cookies
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/24/2025, 6:04:55 PM
 * Link: https://leetcode.com/problems/assign-cookies/
 */

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();int m=s.size();
        int i=0,j=0;
        int cnt=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<n&&j<m){
            if(g[i]<=s[j]){
                cnt++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return cnt;
    }
};
