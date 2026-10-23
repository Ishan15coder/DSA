/*
 * Problem #114: Flatten Binary Tree to Linked List
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/23/2026, 7:41:51 PM
 * Link: https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
 */


class Solution {
public:
    TreeNode* trav(TreeNode* root) {
        if(root == NULL) return NULL;

        TreeNode* lr = trav(root->left);
        TreeNode* rr = trav(root->right);

        TreeNode* leftTail = lr;
        TreeNode* rightTail = rr;

        // Find the tail of the flattened left subtree
        if(leftTail != NULL) {
            while(leftTail->right != NULL) {
                leftTail = leftTail->right;
            }

            leftTail->right = root->right;
            root->right = root->left;
            root->left = NULL;
        }

        return root;
    }

    void flatten(TreeNode* root) {
        trav(root);
    }
};

