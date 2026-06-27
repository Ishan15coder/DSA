/*
 * Problem #7: Reverse Integer
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/25/2025, 7:36:58 PM
 * Link: https://leetcode.com/problems/reverse-integer/
 */

class Solution {
public:
    int reverse(int x) {
        
        int p=x;
        int c=x;
        int cnt=0;
        long long int ans=0;
        while(p>0){
            p=p/10;
            cnt++;
        }
        while(x!=0){
            long long int j=x%10;
            ans= ans*10+j;
            x=x/10;
        }
        
        if(ans<INT_MIN || ans>INT_MAX){
            return 0;
        }
        return ans;
        
    }
};
