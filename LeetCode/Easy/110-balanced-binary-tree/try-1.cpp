/*
 * Problem #110: Balanced Binary Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/19/2026, 2:49:20 PM
 * Link: https://leetcode.com/problems/balanced-binary-tree/
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
    int h(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh=h(root->left);
        int rh=h(root->right);
        return 1+max(lh,rh);
    }
  
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
       if(abs(h(root->left)-h(root->right))>1) return false;

        return isBalanced(root->left) &&
               isBalanced(root->right);
    }
};
