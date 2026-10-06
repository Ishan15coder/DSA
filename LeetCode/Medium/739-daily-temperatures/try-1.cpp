/*
 * Problem #739: Daily Temperatures
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/6/2026, 7:39:07 PM
 * Link: https://leetcode.com/problems/daily-temperatures/
 */

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>ans(temperatures.size(),0);
        for(int i=temperatures.size()-1;i>=0;i--){
         
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]) {
                st.pop();
            }

           if(!st.empty()) {
                ans[i] = st.top()-i;
            }

            st.push(i);
        }
        return ans;
    }
};
