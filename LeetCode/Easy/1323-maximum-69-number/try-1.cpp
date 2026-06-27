/*
 * Problem #1323: Maximum 69 Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/16/2025, 11:36:17 AM
 * Link: https://leetcode.com/problems/maximum-69-number/
 */

class Solution {
public:
    int maximum69Number (int num) {
        if(num==9999)return 9999;
        string s=to_string(num);
        int p=num;
        for(int i=0;i<s.size();i++){
            if(s[i]=='6'){
                p=num%(int)pow(10,(s.size()-1-i));
                int j;
                if(i==0)j=9;
                if(i==1)j=99;
                if(i==2)j=999;
                if(i==3)j=9999;
                p+=j*(int)pow(10,s.size()-1-i);
                break;
            }
        }
        return p;
        // return 9999;
        // if(s[0]=='6'){
        //     p=num%1000;
        //     p+=9000;
        //     return p;
        // }
        // if(s[1]=='6'){
        //     p=num%100;
        //     p+=9900;
        //     return p;
        // }
        // if(s[2]=='6'){
        //     p=num%100;
        //     p+=9990;
        //     return p;
        // }
        // return 9999;
        
    }
};
