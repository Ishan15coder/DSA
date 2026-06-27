/*
 * Problem #160: Intersection of Two Linked Lists
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/16/2025, 12:13:50 AM
 * Link: https://leetcode.com/problems/intersection-of-two-linked-lists/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        ListNode* tp=headB;
        while(temp!=NULL){
            while(tp!=NULL){
                if(temp==tp&&temp->next==tp->next){
                    return temp;
                }
                tp=tp->next;
            }

            tp=headB;
            temp=temp->next;
        }
        return NULL;
    }
};
