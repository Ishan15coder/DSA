/*
 * Problem #403: Frog Jump
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/12/2026, 11:36:07 AM
 * Link: https://leetcode.com/problems/frog-jump/
 */

class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        vector<unordered_set<int>>dp(n);
        dp[0].insert(0);
    if(stones[1]-stones[0]>1)return false;
        for(int i=0;i<n;i++){
                for (int k : dp[i]) {
                if(k>1){
                int p=stones[i]+(k-1);
                int idx1=lower_bound(stones.begin()+i,stones.end(),p)-stones.begin();
                if((idx1>=0&&idx1<n)&&stones[idx1]==p){
         
               dp[idx1].insert(k-1);
                }}
                int q=stones[i]+(k);
                int r=stones[i]+(k+1);
                int idx2=lower_bound(stones.begin()+i,stones.end(),q)-stones.begin();
                int idx3=lower_bound(stones.begin()+i,stones.end(),r)-stones.begin();
                if((idx2<n)&&stones[idx2]==q){
                dp[idx2].insert(k);
                }
                if((idx3<n)&&stones[idx3]==r){
                dp[idx3].insert(k+1);
                }


             }
            
            }
            
            
            return !dp[n-1].empty();
    }
};
