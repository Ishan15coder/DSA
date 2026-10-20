/*
 * Problem #124: Binary Tree Maximum Path Sum
 * Difficulty: Hard
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/20/2026, 6:19:25 PM
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
    int maxi=INT_MIN;
    int ma(TreeNode* r){
        if(r->left==NULL&&r->right==NULL){
            maxi=max(maxi,r->val);
            return r->val;
        }
        int rm=0;
        int lm=0;
        if(r->left!=NULL)lm=ma(r->left);
        if(r->right!=NULL)rm=ma(r->right);
        if(lm<0)lm=0;
        if(rm<0)rm=0;
        maxi=max(r->val+lm+rm,maxi);
        return r->val+max(lm,rm);
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL)return 0;
        ma(root);
        return maxi;
    }
};
