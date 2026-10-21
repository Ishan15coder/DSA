/*
 * Problem #199: Binary Tree Right Side View
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/20/2026, 10:57:07 PM
 * Link: https://leetcode.com/problems/binary-tree-right-side-view/
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            vector<int>l;
            int size=q.size();
            for(int i=0;i<size;i++){
                if(i==size-1)ans.push_back(q.front()->val);
                if(q.front()->left!=NULL)q.push(q.front()->left);
                if(q.front()->right!=NULL)q.push(q.front()->right);                
                q.pop();
            }
                   
        }
        return ans;
    }
};
