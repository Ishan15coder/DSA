/*
 * Problem #234: Palindrome Linked List
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/23/2025, 11:00:32 AM
 * Link: https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        ListNode* t=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++){
            a.push_back(t->val);
            t=t->next;
        }
        for(int i=n-1;i>=0;i--){
                b.push_back(a[i]);
        }
        int checker=0;
        for(int i=0;i<n;i++){
                if(b[i]!=a[i]){
                    checker=1;
                }
        }
        if(checker){
            return false;
        }
        else{
            return true;
        }

    }
};
