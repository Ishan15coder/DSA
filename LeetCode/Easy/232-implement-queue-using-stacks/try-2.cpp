/*
 * Problem #232: Implement Queue using Stacks
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/6/2026, 9:56:20 PM
 * Link: https://leetcode.com/problems/implement-queue-using-stacks/
 */

class MyQueue {
public:
       stack<int>st1; 
       stack<int>st2; 
    MyQueue() {
    }
    
    void push(int x) {
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
       
            int p=st1.top();
            st1.pop();
            return p;
        
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
