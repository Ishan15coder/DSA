/*
 * Problem #75: Sort Colors
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/10/2025, 10:17:28 PM
 * Link: https://leetcode.com/problems/sort-colors/
 */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                z++;
            }
            if(nums[i]==1){
                o++;
            }
            if(nums[i]==2){
                t++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(z>0){
                nums[i]=0;
                z--;
            }
            else{
                if(o>0){
                nums[i]=1;
                o--;
                }
                else{
                    if(t>0){
                        nums[i]=2;
                        t--;
                    }
                }
            }
        }
    }
};
