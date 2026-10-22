/*
 * Problem #222: Count Complete Tree Nodes
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/22/2026, 8:30:49 PM
 * Link: https://leetcode.com/problems/count-complete-tree-nodes/
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
    int le(TreeNode* root){
        int cnt=0;
        TreeNode* node=root;
        while(node){
            node=node->left;
            cnt++;
        }
        return cnt;
    }
    int re(TreeNode* root){
        int cnt=0;
        TreeNode* node=root;
        while(node){
            node=node->right;
            cnt++;
        }
        return cnt;
    }
    int countNodes(TreeNode* root) {
        if(root==NULL)return 0;
        int lh=0,rh=0;
        lh=le(root);
        rh=re(root);
        if(lh==rh)return (1<<lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
