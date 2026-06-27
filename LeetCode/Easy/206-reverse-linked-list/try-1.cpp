/*
 * Problem #206: Reverse Linked List
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/22/2025, 6:25:27 PM
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
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        vector<int>a;
        ListNode* t=head;
        for(int i=0;i<cnt;i++){
            a.push_back(t->val);
            t=t->next;
        }
        ListNode* b=head;
        for(int i=cnt-1;i>=0;i--){
            b->val=a[i];
            b=b->next;
        }
        return head;
    }
};
