/*
 * Problem #876: Middle of the Linked List
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/15/2025, 8:06:09 PM
 * Link: https://leetcode.com/problems/middle-of-the-linked-list/
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
    ListNode* middleNode(ListNode* head) {
        int size=1,n=0;
        ListNode*t=head;
        while(t->next!=NULL){
            size=size+1;
            t=t->next;
        }
            n=(size/2)+1;
        int k=1;
        ListNode*temp=head;
        while(temp!=NULL){
            if(k==n){
                break;
            }
            temp=temp->next;
            k++;
        }
        return temp;
    }
};
