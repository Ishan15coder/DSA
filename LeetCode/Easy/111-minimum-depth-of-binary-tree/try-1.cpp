/*
 * Problem #111: Minimum Depth of Binary Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/27/2026, 12:55:24 PM
 * Link: https://leetcode.com/problems/minimum-depth-of-binary-tree/
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
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        if(root->left == NULL)return 1 + minDepth(root->right);

    if(root->right == NULL)return 1 + minDepth(root->left);

    return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
