/*
 * Problem #141: Linked List Cycle
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/17/2025, 8:01:16 PM
 * Link: https://leetcode.com/problems/linked-list-cycle/
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        if(head->next==NULL){
            return false;
        }
        if(head->next->next==head){
            return true;
        }
        ListNode *fast=head->next->next;
        ListNode *slow=head->next;
        while(fast!=NULL  && fast->next!=NULL && fast->next->next!=NULL && slow->next!=NULL&& slow!=NULL){
            if(fast==slow){
                return true;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        return false;
    }
};
