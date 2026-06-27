/*
 * Problem #236: Lowest Common Ancestor of a Binary Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/10/2025, 6:02:54 PM
 * Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
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
        if(root==NULL)return NULL;
        if(root->val==p->val||root->val==q->val)return root;
        TreeNode*lfc=lowestCommonAncestor(root->left,p,q);
        TreeNode*rfc=lowestCommonAncestor(root->right,p,q);
        if(lfc!=NULL&&rfc!=NULL)return root;
        return lfc==NULL?rfc:lfc;
    }
};
