/*
 * Problem #450: Delete Node in a BST
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/29/2026, 12:50:57 PM
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* node=root;
        if(node==NULL)return NULL;
        if(node->val==key&&node->left==NULL&&node->right==NULL){
            return NULL;
        }
        if(node->val==key&&(node->left==NULL||node->right==NULL)){
            if(node->left==NULL)return node->right;
            else return node->left;
        }
        int l=0;
        int r=0;
        TreeNode*prev;
        while(node!=NULL){
            if(node->val==key){
                break;
            }
            else if(node->val<key){
                l=0;
                r=1;
                prev=node;
                node=node->right;
            }
            else{
                l=1;
                r=0;
                prev=node;
                node=node->left;
            }
        }
        if(node!=NULL){if(node->left==NULL&&node->right==NULL){
            if(l==1)prev->left=NULL;
            else prev->right=NULL;
        }
        else if(node->left==NULL||node->right==NULL){
            if(node->left==NULL){
                if(l==1) prev->left=node->right;
                else prev->right=node->right;
                node->right=NULL;
            }
            else{
                if(l==1) prev->left=node->left;
                else prev->right=node->left;
                node->left=NULL;
            }
        }
        else{
            TreeNode* r=node->right;
            while(r->left!=NULL&&r->left->left!=NULL){
                r=r->left;
            }
            if(r->left==NULL){
                node->val=r->val;
                node->right=deleteNode(r,node->val);
            }
            else{
                node->val=r->left->val;
                r->left=deleteNode(r->left,node->val);
            }
        }}
        return root;
    }
};
