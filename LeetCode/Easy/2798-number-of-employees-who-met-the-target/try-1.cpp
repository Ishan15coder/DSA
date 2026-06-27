/*
 * Problem #2798: Number of Employees Who Met the Target
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/19/2025, 8:07:12 PM
 * Link: https://leetcode.com/problems/number-of-employees-who-met-the-target/
 */

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n=hours.size();
       
        int p=0,i=0;
        while(i<n){
            if(hours[i]>=target){
                p++;    
                
            }
            i++;
        }
           return p;
    }
};
