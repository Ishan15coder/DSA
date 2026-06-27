/*
 * Problem #450: Delete Node in a BST
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/11/2025, 11:51:04 AM
 * Link: https://leetcode.com/problems/delete-node-in-a-bst/
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
    TreeNode* is(TreeNode* root){
        while(root->left!=NULL){
            root=root->left;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)return NULL;
        if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else if(root->val<key){
            root->right=deleteNode(root->right,key);
        }
        else{
            if(root->left==NULL&&root->right==NULL){
                delete root;
                return NULL;
            }
            if(root->left==NULL||root->right==NULL){
                TreeNode*child=root->left==NULL?root->right:root->left;
                delete root;
                return child;
            }
            TreeNode* isuc=is(root->right);
            root->val=isuc->val;
            root->right=deleteNode(root->right,isuc->val);
        }
        return root;
    }
};
