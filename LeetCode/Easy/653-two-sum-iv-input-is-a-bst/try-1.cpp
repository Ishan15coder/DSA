/*
 * Problem #653: Two Sum IV - Input is a BST
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/2/2026, 9:22:48 AM
 * Link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
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
    vector<int>ino;
    void in(TreeNode* root){
        if(root==NULL){
            return;
        }
        in(root->left);
        ino.push_back(root->val);
        in(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        in(root);
        int l=0;
        int r=ino.size()-1;
        while(l<r){
            if(ino[l]+ino[r]==k){
                return true;
            }
            else if(ino[l]+ino[r]>k){
                r--;
            }
            else{
                l++;
            }
        }
        return false;
    }
};
