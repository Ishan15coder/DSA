/*
 * Problem #155: Min Stack
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/28/2025, 11:10:31 AM
 * Link: https://leetcode.com/problems/min-stack/
 */

class MinStack {
public:
    vector<int>d;
    int tp;
    MinStack() {
        tp=-1;
    }
    
    void push(int val) {
        d.push_back(val);
        tp++;
    }
    
    void pop() {
        d.pop_back();
        tp--;
    }
    
    int top() {
        if(d.empty()){
            return -1;
        }
        int p=d.back();
        return p;
    }
    
    int getMin() {
        int min=d[0];
        int n=d.size();
        for(int i=1;i<n;i++){
            if(d[i]<min){
                min=d[i];
            }
        }
        return min;
    }
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
