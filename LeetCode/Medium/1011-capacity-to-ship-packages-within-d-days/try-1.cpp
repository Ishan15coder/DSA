/*
 * Problem #1011: Capacity To Ship Packages Within D Days
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/12/2025, 10:09:31 AM
 * Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
 */

class Solution {
public:
    bool help(int mid,int days,vector<int>& weights){
        int k=1;
        int s=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+s<=mid){
                s+=weights[i];
            }
            else{
                s=0;
                k++;
                s+=weights[i];
            }
        }
        if(k<=days)return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long sum=0;
        int ma=INT_MIN;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            ma=max(ma,weights[i]);
        }
        int low=ma;
        int high=sum;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            bool p=help(mid,days,weights);
            if(p){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
