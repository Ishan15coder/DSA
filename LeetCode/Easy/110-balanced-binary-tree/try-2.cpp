/*
 * Problem #110: Balanced Binary Tree
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/19/2026, 3:01:12 PM
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
        if(lh==-1||rh==-1)return -1;
        if(abs(lh-rh)>1)return -1;
        return 1+max(lh,rh);
    }
  
    bool isBalanced(TreeNode* root) {
         return h(root) != -1;
    }
};
