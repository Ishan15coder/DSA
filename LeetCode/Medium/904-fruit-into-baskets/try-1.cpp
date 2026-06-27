/*
 * Problem #904: Fruit Into Baskets
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/23/2025, 6:40:03 PM
 * Link: https://leetcode.com/problems/fruit-into-baskets/
 */

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       unordered_map<int,int>hash;
       int l=0,r=0,n=fruits.size();
       int ma=INT_MIN;
       while(r<n){
        hash[fruits[r]]++;
        while(hash.size()>2){
            hash[fruits[l]]--;
            if(hash[fruits[l]]==0)hash.erase(fruits[l]);
            l++;
        }
        
            ma=max(ma,r-l+1);
        
        r++;
       } 
       return ma;
    }
};
