/*
 * Problem #1441: Build an Array With Stack Operations
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/5/2026, 12:24:08 PM
 * Link: https://leetcode.com/problems/build-an-array-with-stack-operations/
 */

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int>stre;
        for(int i=1;i<=n;i++)stre.push_back(i);
        stack<int>s;
        vector<string>ans;
        int i=0;
        int idx=0;
        while(i<target.size()&&idx<stre.size()){
            s.push(stre[idx]);
            ans.push_back("Push");
            if(s.top()==target[i]){
                i++;
                idx++;
            }
            else{
            ans.push_back("Pop");
            s.pop();
                idx++;
            }

        }
        return ans;
    }
};
