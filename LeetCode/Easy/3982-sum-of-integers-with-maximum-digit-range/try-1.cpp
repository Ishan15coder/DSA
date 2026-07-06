/*
 * Problem #3982: Sum of Integers with Maximum Digit Range
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/5/2026, 8:26:07 AM
 * Link: https://leetcode.com/problems/sum-of-integers-with-maximum-digit-range/
 */

class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        map<long long,long long>mk;
        for(int i=0;i<nums.size();i++){
            mk[nums[i]]++;
        }
        map<long long,long long>mp;
        for(int i=0;i<nums.size();i++){
            long long j=nums[i];
            long long mi=INT_MAX;
            long long ma=INT_MIN;
            while(j>0){
                long long p=j%10;
                j=j/10;
                mi=min(mi,p);
                ma=max(ma,p);
            }
        mp[nums[i]]=ma-mi;
        }
 
    long long m=-1;
    for(auto it: mp){
        m=max(it.second,m);
    }
long long ans=0;
    for(auto it: mp){
        if(m==it.second)ans+=it.first*mk[it.first];
    }
return ans;
    }
};
