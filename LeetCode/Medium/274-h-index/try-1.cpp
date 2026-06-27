/*
 * Problem #274: H-Index
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/25/2026, 11:26:10 AM
 * Link: https://leetcode.com/problems/h-index/
 */

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        // map<int,int>h;
        // vector<pair<int,int>>w;
        // for(int i=0;i<citations.size();i++){
        //     h[citations[i]]++;
        // }
        // for(auto it:h){
        //    w.push_back({it.first,it.second});
        // }
        // sort(w.begin(),w.end());
        // int k=0;
        // int ans=1;
        // for(int i=0;i<w.size();i++){
        //     if(w[i].first<=n-k){
        //        ans= w[i].first;
        //     }
        //     k+=w[i].second;
        // }
        // return ans;
        sort(citations.begin(),citations.end());
        int ans=0;
        for(int i=0;i<citations.size();i++){
            if(citations[i]<=n-i){
                ans=citations[i];
            }
            else{
                for(int l=ans+1;l<citations[i];l++){
                     if(l<=n-i){
                    ans=l;
                    }
                }
            }
        }
        return ans;
    }
};
