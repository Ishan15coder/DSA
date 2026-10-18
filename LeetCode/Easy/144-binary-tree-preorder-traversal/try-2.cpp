/*
 * Problem #144: Binary Tree Preorder Traversal
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/18/2026, 5:00:35 PM
 * Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
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
        ans.push_back(f->val);
        pre(f->left);
        pre(f->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        pre(root);
        return ans;
    }
};
