/*
 * Problem #19: Remove Nth Node From End of List
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 3/1/2025, 8:08:13 PM
 * Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=1;
        ListNode* temp=head;
         ListNode* t=head;
        while(temp->next!=NULL){
            size++;
            temp=temp->next;
        }
        int Nodeno=size-n;
        int k=0;
        int I=0;
        while(t!=NULL){
            if(head==NULL){
                return NULL;
            }
            if(head->next==NULL){
                return NULL;
            }
            if(size==n){
                 I=1;
                 break;
            }
            if(k==size-n-1){
                ListNode*temp=t->next;
                t->next=t->next->next;
                delete temp;
                break;
                
            }
           
            t=t->next;
            k++;
        }
        if(I){
            return head->next;
        }
        else{
        return head;
        }
    }
};
