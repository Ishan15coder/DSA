/*
 * Problem #94: Binary Tree Inorder Traversal
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/27/2026, 10:27:26 AM
 * Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
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
 
    vector<int> inorderTraversal(TreeNode* root) {
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

                    prev->right=curr;
                    curr=curr->left;
                }
                else{
                    ans.push_back(curr->val);
                    prev->right=NULL;
                    curr=curr->right;
                }
            }
         }
         return ans;
    }
};
