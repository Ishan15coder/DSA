/*
 * Problem #987: Vertical Order Traversal of a Binary Tree
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/20/2026, 8:29:40 PM
 * Link: https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
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
    map<pair<int,int>,vector<int>>mp;
    int mij=0;
    int maj=0;
    int mii=0;
    void pre(TreeNode* root,int i,int j){
        if(root==NULL){
            return;
        }
        mp[{i, j}].push_back(root->val);
        mii=max(mii,i);
        mij=min(mij,j);
        maj=max(maj,j);
        pre(root->left,i+1,j-1);
        pre(root->right,i+1,j+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
    int i=0;
    int j=0;
        pre(root,i,j);
        
        for (int k = mij; k <= maj; k++) {
            vector<int> l;

            for (auto it : mp) {
                if (it.first.second == k) {
                    sort(it.second.begin(), it.second.end());

                    for (auto g : it.second) {
                        l.push_back(g);
                    }
                }
            }

            ans.push_back(l);
        }

        return ans;
    }
};
