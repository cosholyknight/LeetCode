/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void helper(vector<int> &ans, Node* root) {
        if (!root) return;
        for (int i = 0; i < root->children.size(); i++) {
            helper(ans, root->children[i]);
        }
        ans.push_back(root->val);
        return;
    }
    vector<int> postorder(Node* root) {
        vector<int> ans;
        helper(ans, root);
        return ans;
    }
};
