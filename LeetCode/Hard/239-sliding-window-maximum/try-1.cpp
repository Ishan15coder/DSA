/*
 * Problem #239: Sliding Window Maximum
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/10/2026, 7:41:25 PM
 * Link: https://leetcode.com/problems/sliding-window-maximum/
 */

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int n=nums.size();
        priority_queue<int>pq;
        vector<int>max;
        unordered_map<int,int>mp;
        while(r<n){
            pq.push(nums[r]);
            mp[nums[r]]++;
           if(r-l+1>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0)mp.erase(nums[l]);
                while(!mp.contains(pq.top())){
                    pq.pop();
                }
                l++;
            }
            if(r-l+1==k){
                max.push_back(pq.top());
            }
            r++;
        }
        return max;
    }
};
