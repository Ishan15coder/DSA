/*
 * Problem #125: Valid Palindrome
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/3/2025, 4:32:11 PM
 * Link: https://leetcode.com/problems/valid-palindrome/
 */

class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        int n=s.length();
        for(int i=0;i<s.length();i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
                s[i] = tolower(s[i]);  // Convert to lowercase
            }
            else {
                s.erase(i,1);
                i--;
                    
                
            }
        }
        for(int i=s.length()-1;i>=0;i--){
            
                p+=s[i];
        }
        int flag=0;
        for(int i=0;i<s.length();i++){
            
                if(p[i]!=s[i]){
                    flag=1;
                    break;
                }
        }
        if(flag){
            return false;
        }
        else{
            return true;
        }
    }
};
