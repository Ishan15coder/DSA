/*
 * Problem #235: Lowest Common Ancestor of a Binary Search Tree
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/29/2026, 10:26:55 PM
 * Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(root==p||root==q)return root;
        TreeNode* lfc=lowestCommonAncestor(root->left,p,q);
        TreeNode* rfc=lowestCommonAncestor(root->right,p,q);
        if(lfc!=NULL&&rfc!=NULL)return root;
        if(rfc!=NULL)return rfc;
        return lfc;
    }
};
