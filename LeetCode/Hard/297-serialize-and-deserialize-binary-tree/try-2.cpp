/*
 * Problem #297: Serialize and Deserialize Binary Tree
 * Difficulty: Hard
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/28/2026, 9:58:11 AM
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
        string data="";
        if(root==NULL){
            data+='#';
            return data;
        }
        TreeNode* p=root;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
            TreeNode* n=q.front();
            q.pop();
            if(n==NULL){
                data+='#';
                data+=',';
                continue;
            }
            else{
                data += to_string(n->val);
                data+=',';
            }
                q.push(n->left);
                q.push(n->right);
        
}
        }
        return data;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string>tokens;
        stringstream ss(data);
        string token;
        while(getline(ss,token,',')){
            tokens.push_back(token);
        }
        if(tokens[0]=="#")return NULL;
        TreeNode* root=new TreeNode(stoi(tokens[0]));
        queue<TreeNode*>q;
        q.push(root);
        int idx=1;
        while(!q.empty()&&idx<tokens.size()){
            TreeNode* node=q.front();
            q.pop();
            if(tokens[idx]!="#"){
                TreeNode* lt=new TreeNode(stoi(tokens[idx]));
                node->left=lt;
                q.push(lt);
            }
                idx++;
            if(idx<tokens.size()&&tokens[idx]!="#"){
                TreeNode* rt=new TreeNode(stoi(tokens[idx]));
                node->right=rt;
                q.push(rt);
            }
            idx++;

        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
