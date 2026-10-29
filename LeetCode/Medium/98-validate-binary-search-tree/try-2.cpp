/*
 * Problem #98: Validate Binary Search Tree
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/29/2026, 9:54:08 AM
 * Link: https://leetcode.com/problems/validate-binary-search-tree/
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
    bool help(TreeNode* root,TreeNode*min,TreeNode* max){
        if(root==NULL){
            return true;
        }
        if((min!=NULL)&&root->val<=min->val){
            return false;
        }
        if((max!=NULL)&&root->val>=max->val){
            return false;
        }
        return help(root->left,min,root)&&help(root->right,root,max);        
    }
     bool isValidBST(TreeNode* root) {
      return help(root,NULL,NULL);

    }
};
