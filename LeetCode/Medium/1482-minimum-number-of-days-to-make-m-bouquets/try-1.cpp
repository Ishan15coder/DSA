/*
 * Problem #1482: Minimum Number of Days to Make m Bouquets
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/11/2025, 11:37:17 AM
 * Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
 */

class Solution {
public:
    int help(vector<int>&bloomDay,int Q,int k){
        int fin=0;
        int cnt=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=Q){
                cnt++;
                if(cnt==k){
                    fin++;
                    cnt=0;
                }
            }
            else{
                
                cnt=0;
            }   
        }
        return fin;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mi=INT_MAX;
        int ma=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            ma=max(bloomDay[i],ma);
            mi=min(bloomDay[i],mi);
        }
        int low=mi;
        int high=ma;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int p=help(bloomDay,mid,k);
            if(p>=m){
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
