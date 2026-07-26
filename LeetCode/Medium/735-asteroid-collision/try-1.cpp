/*
 * Problem #735: Asteroid Collision
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/22/2026, 10:20:05 AM
 * Link: https://leetcode.com/problems/asteroid-collision/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>a;
        for(int i=0;i<asteroids.size();i++){
            if(st.empty())st.push(asteroids[i]);
            else if(st.top()>0&&asteroids[i]<0){

                while(!st.empty()&&abs(st.top())<abs(asteroids[i])&&(st.top()>0&&asteroids[i]<0)){
                    st.pop();
                }
              
                if(st.empty()||(st.top()<0&&asteroids[i]<0)||(st.top()>0&&asteroids[i]>0)) st.push(asteroids[i]);
                else if(abs(st.top())==abs(asteroids[i])&&(st.top()>0&&asteroids[i]<0))st.pop();
            }
            else st.push(asteroids[i]);
        }
        while(!st.empty()){
            a.push_back(st.top());
            st.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
};
