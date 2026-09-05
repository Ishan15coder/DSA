/*
 * Problem #2739: Total Distance Traveled
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/4/2026, 5:51:01 PM
 * Link: https://leetcode.com/problems/total-distance-traveled/
 */

class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
    long long ans=0;
        long long cnt=0;
        while(mainTank){
            if(cnt==5&& additionalTank>0){
                cnt=0;
                mainTank++;
                additionalTank--;
            }
            ans+=10;
            cnt++;
            mainTank--;
        }
        if(cnt==5&& additionalTank>0){
            ans+=10;
        }
    
    return ans;
    
    
    }
};
