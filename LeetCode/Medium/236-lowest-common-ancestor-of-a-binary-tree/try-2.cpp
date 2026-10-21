/*
 * Problem #236: Lowest Common Ancestor of a Binary Tree
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/21/2026, 4:18:09 PM
 * Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<TreeNode*>>paths;
    vector<TreeNode*>path1;
    vector<TreeNode*>path2;
    void pre1(TreeNode* root,TreeNode*p){
        if(root==NULL){
            return;
        }
        if(root==p){
            path1.push_back(p);
            paths.push_back(path1);
            return;
        }
        path1.push_back(root);
        pre1(root->left,p);
        pre1(root->right,p);
        path1.pop_back();
    }
    void pre2(TreeNode* root,TreeNode*q){
        if(root==NULL){
            return;
        }
        if(root==q){
            path2.push_back(q);
            paths.push_back(path2);
            return;
        }
        path2.push_back(root);
        pre2(root->left,q);
        pre2(root->right,q);
        path2.pop_back();
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return root;
        pre1(root,p);
        pre2(root,q);
        path1.clear();
        path2.clear();
        
            path1=paths[0];
            path2=paths[1];
            for(int i=path1.size()-1;i>=0;i--){
                for(int j=path2.size()-1;j>=0;j--){
                    if(path1[i]==path2[j]){
                        return path1[i];
                    }
                }
            }
        return root;
    }
};
