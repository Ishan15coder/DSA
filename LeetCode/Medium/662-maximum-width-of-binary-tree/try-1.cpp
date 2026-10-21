/*
 * Problem #662: Maximum Width of Binary Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/21/2026, 4:57:48 PM
 * Link: https://leetcode.com/problems/maximum-width-of-binary-tree/
 */

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        int ms = 1;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        while(!q.empty()) {
            int size = q.size();
            long long start = q.front().second;
            long long end = q.back().second;

            ms = max(ms, (int)(end - start + 1));

            for(int k = 0; k < size; k++) {
                TreeNode* node = q.front().first;
                long long pos = q.front().second - start;
                q.pop();

                if(node->left != NULL)
                    q.push({node->left, 2 * pos});

                if(node->right != NULL)
                    q.push({node->right, 2 * pos + 1});
            }
        }

        return ms;
    }
};
