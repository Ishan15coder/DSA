/*
 * Problem #204: Count Primes
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/15/2025, 6:03:43 PM
 * Link: https://leetcode.com/problems/count-primes/
 */

class Solution {
public:
    // bool prime(int a){
    //     int ch=0;
    //     for(int i=2;i<=a/2;i++){
    //         if(a%i==0)ch=1;
    //     }
    //     if(ch)return false;
    //     return true;
    // }
    int countPrimes(int n) {
        vector<int>prime(n+1);
        for(int i=2;i<n;i++){
            prime[i]=1;
        }
        for(int i=2;i*i<=n;i++){
            if(prime[i]==1){
                for(int j=i*i;j<=n;j+=i){
                            prime[j]=0; 
                }                           
                    }
        
        }
        int cnt=0;
        for(int i=2;i<=n;i++){
            if(prime[i])cnt++;
        }
        return cnt;

    }
};
