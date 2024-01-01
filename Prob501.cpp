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
    void helper(TreeNode* root, int &curVal, int &curCnt, int& maxCnt, vector<int> &ans) {
        if (!root) return;
        helper(root->left, curVal, curCnt, maxCnt, ans);
        if (root->val == curVal) {
            curCnt++;
        }
        else {
            curVal = root->val;
            curCnt = 1;
        }
        if (curCnt > maxCnt) {
            maxCnt = curCnt;
            ans.clear();
            ans.push_back(curVal);
        }
        else if (curCnt == maxCnt) ans.push_back(curVal);
        helper(root->right, curVal, curCnt, maxCnt, ans);
    } 
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int curCnt = 0, curVal = 0, maxCnt = 0;
        helper(root, curVal, curCnt, maxCnt, ans);
        return ans;
    }
};
