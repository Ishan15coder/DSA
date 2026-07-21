/*
 * Problem #503: Next Greater Element II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/21/2026, 9:11:35 AM
 * Link: https://leetcode.com/problems/next-greater-element-ii/
 */

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=(2*n)-1;i>=0;i--){
            while(!st.empty()&&st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                if(st.empty())ans[i]=-1;
                else ans[i]=st.top();
            }   
            st.push(nums[i%n]);
        }
        return ans;
    }
};
