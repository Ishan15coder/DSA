/*
 * Problem #973: K Closest Points to Origin
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/26/2025, 11:05:47 AM
 * Link: https://leetcode.com/problems/k-closest-points-to-origin/
 */

class Solution {
public:
    class point{
        public:
            int idx;
            int ds;
        point(int idx,int ds){
            this->idx=idx;
            this->ds=ds;
        }
        bool operator < (const point &obj)const{
            return this->ds>obj.ds;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        vector<point>p;
        for(int i=0;i<points.size();i++){
            int d=(points[i][0]*points[i][0])+points[i][1]*points[i][1];
            p.push_back(point(i,d));
        }
        priority_queue<point>pq(p.begin(),p.end());
        for(int i=0;i<k;i++){
            point pt=pq.top();
            pq.pop();
            ans.push_back(points[pt.idx]);
        }
        return ans;
    }
};
