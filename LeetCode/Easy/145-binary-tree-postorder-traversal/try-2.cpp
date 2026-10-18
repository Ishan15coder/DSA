/*
 * Problem #145: Binary Tree Postorder Traversal
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/18/2026, 5:04:06 PM
 * Link: https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    vector<int>ans;
    void pre(TreeNode* f){
        if(f==NULL){
            return;
        }
        pre(f->left);
        pre(f->right);
        ans.push_back(f->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        pre(root);
        return ans;
    }
};
