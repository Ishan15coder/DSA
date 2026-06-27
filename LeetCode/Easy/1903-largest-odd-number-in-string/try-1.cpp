/*
 * Problem #1903: Largest Odd Number in String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/11/2025, 8:16:31 PM
 * Link: https://leetcode.com/problems/largest-odd-number-in-string/
 */

class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int n=num.length();
        if(num[n-1]=='1'||num[n-1]=='3'||num[n-1]=='5'||num[n-1]=='7'||num[n-1]=='9'){
            ans=num;
            return ans;
        }
        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(num[i]=='1'||num[i]=='3'||num[i]=='5'||num[i]=='7'||num[i]=='9'){
                idx=i;
                break;
            }
        }
        if(idx==0)return ans+=num[0];
        for(int i=0;i<=idx;i++){
            ans+=num[i];
        }

        if(idx==-1)return ans;
        return ans;

    }
};
