/*
 * Problem #191: Number of 1 Bits
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/10/2024, 7:36:28 PM
 * Link: https://leetcode.com/problems/number-of-1-bits/
 */

class Solution {
public:
    int hammingWeight(int n) {
        vector<int>f;
        int count=0;
        while(n>0){
            int k=n%2;
            f.push_back(k);
            n=n/2;
            count++;
        }
        int bit=0;
        for(int i=0;i<count;i++){
            if(f[i]&1){
                bit++;
            }
        }
        return bit;
    }
};
