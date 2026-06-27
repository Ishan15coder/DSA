/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/6/2024, 10:17:20 AM
 * Link: https://leetcode.com/problems/valid-anagram/
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
        cout<<"It is not a valid anagram";
        return false;
    }
    else{
        int count[26]={0};
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            if(count[t[i]-'a']==0){
                cout<<"It is not a valid anagram";
                return false;
            }
             count[t[i]-'a']--;
        }
       
            cout<<"It is a valid anagram";
        return true;
    }
}
   };


