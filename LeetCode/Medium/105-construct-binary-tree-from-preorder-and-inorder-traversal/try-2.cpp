/*
 * Problem #105: Construct Binary Tree from Preorder and Inorder Traversal
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/24/2026, 3:02:01 PM
 * Link: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
 */


class Solution {
public:
    TreeNode* bi(vector<int>& preorder, vector<int>& inorder,
                  int start, int end, int& p,
                  unordered_map<int,int>& mp) {

        if(start > end) return NULL;

        int idx = mp[preorder[p]];

        TreeNode* root = new TreeNode(preorder[p]);
        p++;

        TreeNode* lr = bi(preorder, inorder, start, idx-1, p, mp);
        TreeNode* rr = bi(preorder, inorder, idx+1, end, p, mp);

        root->left = lr;
        root->right = rr;

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;

        for(int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        int p = 0;
        return bi(preorder, inorder, 0, inorder.size()-1, p, mp);
    }
};

