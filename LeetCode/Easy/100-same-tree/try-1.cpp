/*
 * Problem #100: Same Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/19/2026, 2:32:37 PM
 * Link: https://leetcode.com/problems/same-tree/
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool pre(TreeNode* p,TreeNode* q){
        if(p==NULL &&q==NULL){
            return true;
        }
        else if(p==NULL||q==NULL){
            return false;
        }
        else if(p->val!=q->val){
            return false;
        }
        bool c=pre(p->left,q->left);
        bool d=pre(p->right,q->right);
        return (c&d);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)return true;
        if(p==NULL||q==NULL)return false;
        if(p->val!=q->val)return false;
        return pre(p,q);
    }
};
