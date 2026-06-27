/*
 * Problem #203: Remove Linked List Elements
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/22/2025, 10:34:12 AM
 * Link: https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
       // ListNode* back=temp->next;
       if(head==NULL){
        return NULL;
       }
       while(head!=NULL&&head->val==val){
        ListNode* tp=head;
        head=head->next;
        delete tp;
       }
        ListNode* temp=head;
        while(temp!=NULL&&temp->next!=NULL){
            if(temp->next->val==val){
              ListNode* nextNode = temp->next; 
                temp->next=temp->next->next;
              
                delete nextNode;  
            }
            else{
            temp=temp->next;
            }
        }
        return head;
    }
};
