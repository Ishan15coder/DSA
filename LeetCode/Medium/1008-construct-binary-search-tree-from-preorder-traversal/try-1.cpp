/*
 * Problem #1008: Construct Binary Search Tree from Preorder Traversal
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/30/2026, 10:43:53 AM
 * Link: https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/
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
    TreeNode* bi(vector<int>&preorder,int ps,int pe,vector<int>&in,int ins,int ine,unordered_map<int,int>&l){
        if(ps>pe||ins>ine){
            return NULL;
        }
        while(!(l[preorder[ps]]>=ins&&l[preorder[ps]]<=ine)){
            ps++;
        }
        int idx=l[preorder[ps]];
        TreeNode* root=new TreeNode(preorder[ps]);
     
        TreeNode* ls=bi(preorder,ps,pe,in,ins,idx-1,l);
        
        TreeNode* rs=bi(preorder,ps,pe,in,idx+1,ine,l);
        root->left=ls;
        root->right=rs;
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int>in=preorder;
        sort(in.begin(),in.end());
        unordered_map<int,int>l;
        for(int i=0;i<in.size();i++){
            l[in[i]]=i;
        }
        TreeNode* root=bi(preorder,0,preorder.size()-1,in,0,in.size()-1,l);
        return root;
    }
};
