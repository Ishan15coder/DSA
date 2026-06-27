/*
 * Problem #102: Binary Tree Level Order Traversal
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/9/2025, 10:16:08 PM
 * Link: https://leetcode.com/problems/binary-tree-level-order-traversal/
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
vector<vector<int>>ans;
 void so(TreeNode* root){
    if(root==NULL){
        return;
    }
    int i=0;
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    ans.push_back({});
    while(!q.empty()){
        if(q.front()==NULL){
            q.pop();
            i++;
            if(q.empty())break;
            ans.push_back({});
            q.push(NULL);
        }
        TreeNode*curr=q.front();
        ans[i].push_back(curr->val);
        
        q.pop();
        
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
 }
    vector<vector<int>> levelOrder(TreeNode* root) {
        so(root);
        return ans;
    }
};
