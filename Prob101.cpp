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
    bool helper(TreeNode* l, TreeNode* r) {
        if (!l && !r) return 1;
        if (l && r && l->val == r->val)
        return helper(l->left, r->right) && helper(l->right, r->left);
        return 0;
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root, root);
    }
};
