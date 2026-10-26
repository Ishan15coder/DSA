/*
 * Problem #297: Serialize and Deserialize Binary Tree
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/26/2026, 4:28:50 PM
 * Link: https://leetcode.com/problems/serialize-and-deserialize-binary-tree/
 */


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root == NULL) return "";

        string p = "";
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (node == NULL) {
                p += "#,";
            }
            else {
                p += to_string(node->val) + ",";
                q.push(node->left);
                q.push(node->right);
            }
        }

        return p;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.empty()) return NULL;

        stringstream ss(data);
        string s;
        vector<string> g;

        while (getline(ss, s, ',')) {
            if (!s.empty())
                g.push_back(s);
        }

        if (g.empty() || g[0] == "#")
            return NULL;

        TreeNode* root = new TreeNode(stoi(g[0]));
        queue<TreeNode*> q;
        q.push(root);

        int i = 1;

        while (!q.empty() && i < g.size()) {
            TreeNode* node = q.front();
            q.pop();

            // Left child
            if (i < g.size() && g[i] != "#") {
                node->left = new TreeNode(stoi(g[i]));
                q.push(node->left);
            }
            i++;

            // Right child
            if (i < g.size() && g[i] != "#") {
                node->right = new TreeNode(stoi(g[i]));
                q.push(node->right);
            }
            i++;
        }

        return root;
    }
};

