/*
 * Problem #1290: Convert Binary Number in a Linked List to Integer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/15/2025, 8:14:28 PM
 * Link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
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
    int getDecimalValue(ListNode* head) {
        int k=1,p=0;
        ListNode*t=head;
        ListNode*temp=head;
        while(t->next!=NULL){
            k++;
            t=t->next;
        }
        int i=1;
        while(temp!=NULL){
            int l=temp->val;
            p+=l*pow(2,k-i);
            temp=temp->next;
            i++;
        }
        return p;
    }
};
