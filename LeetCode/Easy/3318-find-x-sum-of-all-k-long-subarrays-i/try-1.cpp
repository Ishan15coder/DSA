/*
 * Problem #3318: Find X-Sum of All K-Long Subarrays I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/4/2025, 9:54:42 PM
 * Link: https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i/
 */

class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int>ans;
        int l=0,r=0,n=nums.size();
        map<int,int>h;
        while(r<n){
            h[nums[r]]++;
            while(r-l+1>k){
                h[nums[l]]--;
                if(h[nums[l]]==0)h.erase(nums[l]);
                l++;
            }
            if(r-l+1==k){
                vector<pair<int,int>>p;
                for(auto it:h){
                    p.push_back({it.first,it.second});
                }
                sort(p.begin(),p.end(),[](auto &a,auto &b){
                    if(a.second!=b.second)return a.second>b.second;
                    else return a.first>b.first;
                });
                int m=0;
                for(int i=0;i<min(x, (int)p.size());i++){
                    m+=p[i].first*p[i].second;
                }
                ans.push_back(m);
            }
            r++;
        }
        return ans;
    }
};
