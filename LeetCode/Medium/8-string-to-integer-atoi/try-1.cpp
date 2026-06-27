/*
 * Problem #8: String to Integer (atoi)
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/12/2025, 11:18:38 AM
 * Link: https://leetcode.com/problems/string-to-integer-atoi/
 */

class Solution {
public:
    int myAtoi(string s) {
        int min=INT_MIN;
        int max=INT_MAX;
        long ans=0;
        int i=0;
        while(i<s.length()&&s[i]==' '){
            i++;
        }
        s=s.substr(i);
        i=0;
        int si=0;
        if(s[0]=='-')si=1;
        if(s[0]=='+'||s[0]=='-')i=1;
        for(i;i<s.length();i++){
            if(s[i]==' '||!isdigit(s[i])) break;
            ans=ans*10+s[i]-'0';
            if(si==1&&-1*ans<INT_MIN)return INT_MIN;
            if(si==0&&ans>INT_MAX)return INT_MAX;
        }
        if(si)return ans*-1;
        return ans;
    }
};
