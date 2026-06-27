/*
 * Problem #235: Lowest Common Ancestor of a Binary Search Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/16/2025, 8:30:13 AM
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2){
        if(root==NULL) return NULL;
    if(root==n1||root==n2){
        return root;
    }
    TreeNode* leftlc=lowestCommonAncestor(root->left,n1,n2);
    TreeNode* rightlc=lowestCommonAncestor(root->right,n1,n2);
    if(leftlc!=NULL&&rightlc!=NULL){
        return root;
    }
    return leftlc==NULL?rightlc:leftlc;
    }
};
