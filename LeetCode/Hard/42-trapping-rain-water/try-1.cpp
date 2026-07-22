/*
 * Problem #42: Trapping Rain Water
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/21/2026, 10:06:09 AM
 * Link: https://leetcode.com/problems/trapping-rain-water/
 */

class Solution {
public:
    int trap(vector<int>& height) {
        int lm=0,total=0,rm=0;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            if(height[l]<=height[r]){
                if(lm>height[l]){
                    total+=lm-height[l];
                }
                else lm=height[l];
                l=l+1;
            }
            else{
                if(rm>height[r]){
                    total+=rm-height[r];
                }
                else rm=height[r];
                r-=1;
            }
        }
        return total;
    }
};
