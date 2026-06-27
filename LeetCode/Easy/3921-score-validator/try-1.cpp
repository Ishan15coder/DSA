/*
 * Problem #3921: Score Validator
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/9/2026, 8:12:32 PM
 * Link: https://leetcode.com/problems/score-validator/
 */

class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int cnt=0;
        int sc=0;
        for(int i=0;i<events.size();i++){
            if(cnt==10)break;
            if(events[i]=="0"){
                sc+=0;
            }
            if(events[i]=="1"){
                sc+=1;
               
            }
            if(events[i]=="2"){
                sc+=2;
               
            }
            if(events[i]=="3"){
                sc+=3;
                
            }
            if(events[i]=="4"){
                sc+=4;
               
            }
            if(events[i]=="5"){
                sc+=5;
              
            }
            if(events[i]=="6"){
                sc+=6;
              
            }
            if(events[i]=="W"){
                // sc+=5;
                cnt++;
            }
            if(events[i]=="WD"){
                // sc+=5;
                sc++;
            }
            if(events[i]=="NB"){
                // sc+=5;
                sc++;
            }
        }
        vector<int>p;
        p.push_back(sc);
        p.push_back(cnt);
        return p;
    }
};
