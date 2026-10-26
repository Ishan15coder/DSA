/*
 * Problem #105: Construct Binary Tree from Preorder and Inorder Traversal
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 10/26/2026, 12:05:09 PM
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
    TreeNode* fi(vector<int>& preorder,int ps,int pe,vector<int>& inorder,int ins,int ine,map<int,int>&mp){
        if(ps>pe||ins>ine){
            return NULL;
        }
        int idx=mp[preorder[ps]];
        while(!(idx<=ine&&idx>=ins)){
            ps++;
            idx=mp[preorder[ps]];
        }
        int r=preorder[ps];

        TreeNode* root= new TreeNode(r);
        TreeNode* ls=fi(preorder,ps,pe,inorder,ins,idx-1,mp);
        TreeNode* rs=fi(preorder,ps,pe,inorder,idx+1,ine,mp);
        root->left=ls;
        root->right=rs;
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder[0]==-1){
            return new TreeNode(-1);
        }
      map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode* root=fi(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
};
