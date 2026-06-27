/*
 * Problem #142: Linked List Cycle II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/17/2025, 9:22:44 PM
 * Link: https://leetcode.com/problems/linked-list-cycle-ii/
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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        unordered_map<ListNode*,int>nd;
        while(temp!=NULL){
            if(nd.find(temp)!=nd.end()){
                return temp;
            }
            nd[temp]=1;
            temp=temp->next;
        }
        return NULL;
    }
};
