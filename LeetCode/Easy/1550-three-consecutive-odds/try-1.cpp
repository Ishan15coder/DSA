/*
 * Problem #1550: Three Consecutive Odds
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/25/2025, 10:45:34 AM
 * Link: https://leetcode.com/problems/three-consecutive-odds/
 */

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        int flag=0;
        for(int i=0;i<=arr.size()-3;i++){
           
            if(arr[i]%2!=0&&arr[i+1]%2!=0&&arr[i+2]%2!=0){
                flag=1;
                break;
            }
            
        }
        if(flag){
            return true;
        }
        return false;
    }
};
