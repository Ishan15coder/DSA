/*
 * Problem #3541: Find Most Frequent Vowel and Consonant
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/13/2025, 10:53:45 AM
 * Link: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/
 */

class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>h;
        for(int i=0;i<s.length();i++){
            h[s[i]]++;
        }
        int vc=0;
        int cc=0;
        for(auto it:h){
            if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u'){
                vc=max(it.second,vc);
            }
            else{
                cc=max(cc,it.second);
            }
        }
        return vc+cc;
    }
};
