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
    bool check(TreeNode* root, TreeNode* subRoot) {
        if (!root && !subRoot) return 1;
        else if (root && subRoot && root->val == subRoot->val) return check(root->left, subRoot->left) && check(root->right, subRoot->right);
        else return 0;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return 0;
        if (check(root, subRoot)) return 1;
        return isSubtree(root->left, subRoot) || isSubtree(root->right,subRoot);

    }
};
