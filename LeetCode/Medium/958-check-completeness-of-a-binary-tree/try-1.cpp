/*
 * Problem #958: Check Completeness of a Binary Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/27/2026, 12:07:59 PM
 * Link: https://leetcode.com/problems/check-completeness-of-a-binary-tree/
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
    bool isCompleteTree(TreeNode* root) {
   
        queue<TreeNode*>q;
        q.push(root);
        int ch=0;
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node==NULL){
                ch=1;
            }         
            else{
                if(ch)return false;
                q.push(node->left);
                q.push(node->right);
            }
        }
       
        
        
        return true;
    }
};
