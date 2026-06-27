/*
 * Problem #860: Lemonade Change
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/24/2025, 6:30:22 PM
 * Link: https://leetcode.com/problems/lemonade-change/
 */

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;

        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                five += 5;
            } 


            else if (bills[i] == 10) {
                if (five < 5) return false; 
                five -= 5;   
                ten += 10;   
            }



            else {
                if (ten >= 10 && five >= 5) {
                    ten -= 10; 
                    five -= 5; 
                }
                
                 
                else if (five >= 15) {
                    five -= 15;
                } 


                else return false;
            }


        }
        return true;
    }
};

