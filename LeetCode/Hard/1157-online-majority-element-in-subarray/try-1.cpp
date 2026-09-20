/*
 * Problem #1157: Online Majority Element In Subarray
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/18/2026, 12:15:04 AM
 * Link: https://leetcode.com/problems/online-majority-element-in-subarray/
 */

class MajorityChecker {
public:
vector<int> a;
       unordered_map<int,vector<int>>v;
    MajorityChecker(vector<int>& arr) {
       a=arr;
       for(int i=0;i<a.size();i++){
        v[a[i]].push_back(i);
       }
    }
    
    int query(int left, int right, int threshold) {
        for(const auto &it:v){
            int idx1=lower_bound(it.second.begin(),it.second.end(),left)-it.second.begin();
int idx2=upper_bound(it.second.begin(),it.second.end(),right)-it.second.begin();
            if(idx2-idx1>=threshold)return it.first;
        }
        return -1;
    }
};

/**
 * Your MajorityChecker object will be instantiated and called as such:
 * MajorityChecker* obj = new MajorityChecker(arr);
 * int param_1 = obj->query(left,right,threshold);
 */
