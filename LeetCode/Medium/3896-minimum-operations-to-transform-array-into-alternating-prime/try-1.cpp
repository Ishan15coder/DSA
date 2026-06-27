/*
 * Problem #3896: Minimum Operations to Transform Array into Alternating Prime
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/11/2026, 9:02:12 PM
 * Link: https://leetcode.com/problems/minimum-operations-to-transform-array-into-alternating-prime/
 */

class Solution {
public:

    int minOperations(vector<int>& nums) {
        int ma=300000;
        vector<int>primes(ma+1,1);
        primes[0]=primes[1]=0;
        for(long long i=2;i<=ma;i+=1){
           if(primes[i]){
            for(long long j=i*i;j<=ma;j+=i){
                
                    primes[j]=0;
                
            }
          }
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                if(primes[nums[i]]==1){
                    continue;
                }
                else{
                        nums[i]++;
                        cnt++;
                    while(primes[nums[i]]!=1){
                        nums[i]++;
                        cnt++;
                    }
                }
            }
            else{
               if(primes[nums[i]]!=1){
                    continue;
                }
                else{
                    nums[i]++;
                    cnt++;
                    while(primes[nums[i]]==1){
                        nums[i]++;
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};
