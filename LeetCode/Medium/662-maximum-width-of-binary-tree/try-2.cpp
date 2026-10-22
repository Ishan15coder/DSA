/*
 * Problem #662: Maximum Width of Binary Tree
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/22/2026, 7:03:26 PM
 * Link: https://leetcode.com/problems/maximum-width-of-binary-tree/
 */

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        long long ans = 1;

        while(!q.empty()) {
            int size = q.size();

            long long start = q.front().second;
            long long end = q.back().second;

            ans = max(ans, end - start + 1);

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

        return (int)ans;
    }
};
