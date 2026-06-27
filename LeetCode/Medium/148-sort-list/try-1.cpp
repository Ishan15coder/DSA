/*
 * Problem #148: Sort List
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/15/2025, 1:29:30 PM
 * Link: https://leetcode.com/problems/sort-list/
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
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        ListNode* tp=head;
        vector<int>d;
        while(temp!=NULL){
            d.push_back(temp->val);
            temp=temp->next;
        }

        int n=d.size();
        /*for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(d[i]>d[j]){
                    swap(d[i],d[j]);
                }
            }
        }*/
        sort(d.begin(),d.end());
        for(int i=0;i<n;i++){
            tp->val=d[i];
            tp=tp->next;
        }
        return head;
    }
};
