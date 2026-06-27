/*
 * Problem #21: Merge Two Sorted Lists
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/22/2025, 9:28:49 PM
 * Link: https://leetcode.com/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL){
            return NULL;
        }
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode*tp=list1;
        ListNode*td=list1;
        ListNode*temp=list2;
        vector<int>d;
        
        while(tp!=NULL){
            d.push_back(tp->val);
            tp=tp->next;
        }
        while(td->next!=NULL){
            td=td->next;
        }
        td->next=temp;
        while(temp!=NULL){
            d.push_back(temp->val);
            temp=temp->next;
        }
        int n=d.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(d[i]>d[j]){
                    swap(d[i],d[j]);
                }
            }
        }
        ListNode* head= list1;
        int i=0;
        while(head!=NULL&&i<n){
            head->val=d[i];
            i++;
            head=head->next;
        }
        return list1;

    }
};
