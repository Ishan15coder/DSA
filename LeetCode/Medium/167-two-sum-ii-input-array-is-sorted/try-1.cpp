/*
 * Problem #167: Two Sum II - Input Array Is Sorted
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/27/2025, 10:24:20 PM
 * Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0;
        int high=numbers.size()-1;
        vector<int>ans;
        while(low<=high){
            int sum=numbers[low]+numbers[high];
            if(sum==target){
                ans.push_back(low+1);  
                ans.push_back(high+1);
                break;
            }
            if(sum>target){
                high--;
            }
            else{
                low++;
            }
        }
        return ans;
    }
};
