/*
 * Problem #206: Reverse Linked List
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 3/24/2026, 6:43:55 PM
 * Link: https://leetcode.com/problems/reverse-linked-list/
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* forw;
        while(temp!=NULL){
            forw=temp->next;
            temp->next=prev;
            prev=temp;
            temp=forw;
        }
        return prev;
    }
};
