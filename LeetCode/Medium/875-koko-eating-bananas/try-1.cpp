/*
 * Problem #875: Koko Eating Bananas
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/11/2025, 11:08:53 AM
 * Link: https://leetcode.com/problems/koko-eating-bananas/
 */

class Solution {
public:
    long long hours(vector<int>& piles,int ho){
        long long tot=0;
        for(int i=0;i<piles.size();i++){
            tot+=ceil((double)piles[i]/ho);
        }
        return tot;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        sort(piles.begin(),piles.end());      
        int low=1;
        int high=piles[n-1];
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long tot=hours(piles,mid);
            if(tot<=h){
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
