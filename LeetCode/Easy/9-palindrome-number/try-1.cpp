/*
 * Problem #9: Palindrome Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/1/2024, 12:38:32 AM
 * Link: https://leetcode.com/problems/palindrome-number/
 */

class Solution {
public:
    bool isPalindrome(int x) {
        int count=0;
        int k=x;
        while(x>0){
            x=x/10;
            count++;
        }

   long int a,nw=0;
   x=k;
for (int i = 0; i < count; i++) {
            a = x % 10;
            nw = nw * 10 + a;
            x = x / 10;
        }


        if(k==nw){
            return true;
        }
        else{
        return false;
        }        
}
};
