/*
 * Problem #328: Odd Even Linked List
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/22/2025, 8:03:51 PM
 * Link: https://leetcode.com/problems/odd-even-linked-list/
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
    ListNode* oddEvenList(ListNode* head) {
         if (!head || !head->next) return head;
        ListNode* temp=head;
        ListNode* t=head->next;
        vector<int>odd;
        vector<int>even;
        while(temp!=NULL &&temp->next!=NULL){
            odd.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp!=NULL){
            odd.push_back(temp->val);
        }
        while(t!=NULL&&t->next!=NULL ){
            even.push_back(t->val);
            t=t->next->next;
        }
        if(t!=NULL){
            even.push_back(t->val);
        }
        int k=odd.size();
        int p=even.size();
        ListNode*L=head;
        for(int i=0;i<k;i++){
            L->val=odd[i];
            L=L->next;
        }
        for(int i=0;i<p;i++){
            L->val=even[i];
            L=L->next;
        }
        return head;
    }
};
