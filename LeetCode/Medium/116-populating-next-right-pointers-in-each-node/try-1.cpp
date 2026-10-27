/*
 * Problem #116: Populating Next Right Pointers in Each Node
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/27/2026, 12:16:46 PM
 * Link: https://leetcode.com/problems/populating-next-right-pointers-in-each-node/
 */

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)return NULL;
        queue<Node*>q;
        Node* p=root;
        q.push(p);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                Node* co=q.front();
                if(i==size-1){
                   
                    q.pop();
                }
                else{
                    q.pop();
                    co->next=q.front();
                }
                if(co->left!=NULL)q.push(co->left);
                if(co->right!=NULL)q.push(co->right);
            }
        }
        return root;
    }
};
