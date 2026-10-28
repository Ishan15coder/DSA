/*
 * Problem #144: Binary Tree Preorder Traversal
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 10/27/2026, 10:35:10 AM
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

    vector<int> preorderTraversal(TreeNode* root) {
    vector<int>ans;
       TreeNode* curr=root;
       while(curr!=NULL){
        if(curr->left==NULL){
            ans.push_back(curr->val);
            curr=curr->right;
        }
        else{
            TreeNode* prev=curr->left;
            while(prev->right&&prev->right!=curr){
                prev=prev->right;
            }
            if(prev->right==NULL){
                ans.push_back(curr->val);
                prev->right=curr;
                curr=curr->left;
            }
            else{
                prev->right=NULL;
                curr=curr->right;
            }
        }






       }
        return ans;
    }
};
