/*
 * Problem #2273: Find Resultant Array After Removing Anagrams
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/13/2025, 10:07:42 PM
 * Link: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
 */

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        map<string,string>o;
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            string j=words[i];
            sort(j.begin(),j.end());
            if(o[j]==""){
                o.clear();
                o[j]=words[i];
                ans.push_back(words[i]);
            }
        } 
        
        return ans;
    }
};
