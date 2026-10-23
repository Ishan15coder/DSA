/*
 * Problem #662: Maximum Width of Binary Tree
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 10/23/2026, 7:08:03 PM
 * Link: https://leetcode.com/problems/maximum-width-of-binary-tree/
 */

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, long long>> q;
        if (root == NULL) return 0;

        q.push({root, 0});
        long long ans = 1;

        while (!q.empty()) {
            long long size = q.size();
            long long li = q.front().second;
            long long mi = li;

            for (int i = 0; i < size; i++) {
                long long pos = q.front().second - li;
                TreeNode* node = q.front().first;
                mi = pos;

                if (node->left != NULL)
                    q.push({node->left, 2 * pos});

                if (node->right != NULL)
                    q.push({node->right, 2 * pos + 1});

                q.pop();
            }

            ans = max(ans, mi + 1);
        }

        return ans;
    }
};
