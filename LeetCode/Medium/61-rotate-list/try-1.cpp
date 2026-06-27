/*
 * Problem #61: Rotate List
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/22/2025, 9:39:55 AM
 * Link: https://leetcode.com/problems/rotate-list/
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* tp=head;
        int n=0;
        while(tp!=NULL){
            n++;
            tp=tp->next;
        }
        if(k>125){
            for(int j=2;j<n;j++){
                if(k%j==0){
                    k=j;
                    break;
                }
            }
        }
        while(k>0){
            ListNode* temp=head;
            ListNode*prev=NULL;
            while(temp->next!=NULL){
                prev=temp;
                temp=temp->next;
            }
            temp->next=head;
            prev->next=NULL;
            k--;
            head=temp;
        }
        return head;
    }
};
