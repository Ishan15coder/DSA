/*
 * Problem #105: Construct Binary Tree from Preorder and Inorder Traversal
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/24/2026, 2:21:50 PM
 * Link: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
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
    TreeNode* bi(vector<int>&preorder,vector<int>&inorder,int start,int end,int& p){
      if(start > end) return NULL;
        int idx=start;
       
            while(idx <= end && inorder[idx] != preorder[p])
                idx++;


        
        TreeNode* root= new TreeNode(preorder[p]);
        p++;
        TreeNode* lr=bi(preorder,inorder,start,idx-1,p);
        TreeNode* rr=bi(preorder,inorder,idx+1,end,p);

        root->left=lr;
        root->right=rr;
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder[0]==-1&&inorder[0]==-1){
            return new TreeNode(-1);
        }
      int p = 0;
        return bi(preorder, inorder, 0, inorder.size() - 1, p);
       
        
        
        
    }
};
