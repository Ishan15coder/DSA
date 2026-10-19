/*
 * Problem #124: Binary Tree Maximum Path Sum
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/19/2026, 3:59:52 PM
 * Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/
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
    int maxi = INT_MIN;

    int ma(TreeNode* root) {
        if (root->left == NULL && root->right == NULL) {
            maxi = max(root->val, maxi);
            return root->val;
        }

        int lm = 0;
        int rm = 0;

        if (root->left != NULL)
            lm = ma(root->left);

        if (root->right != NULL)
            rm = ma(root->right);

        lm = max(0, lm);
        rm = max(0, rm);

       
        maxi = max(root->val + lm + rm, maxi);

        return root->val + max(lm, rm);
    }

    int maxPathSum(TreeNode* root) {
        ma(root);
        return maxi;
    }
};

