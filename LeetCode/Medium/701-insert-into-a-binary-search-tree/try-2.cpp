/*
 * Problem #701: Insert into a Binary Search Tree
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/28/2026, 7:58:22 PM
 * Link: https://leetcode.com/problems/insert-into-a-binary-search-tree/
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node=root;
                    TreeNode* n = new TreeNode(val);
                    if(root==NULL)return n;
        while(node!=NULL){       
            if(node->val<val){
                    if(node->right!=NULL)node=node->right;
                    else {node->right=n;
                        break;
                    }
            }
            else{
                if(node->left!=NULL)node=node->left;
                else {node->left=n;
                    break;
                }
            }
        }
        return root;
    }
};
