class Solution {
public:
    vector<int> solve(TreeNode* root,int &ans){
        if(!root){
            return {1000000,-1000000};
        }
        vector<int> l = solve(root->left,ans);
        vector<int> r = solve(root->right,ans);
        ans = min({ans,abs(root->val-l[1]),abs(root->val-r[0])});
        return {min(l[0],root->val),max(r[1],root->val)};
    }
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX;
        solve(root,ans);
        return ans;
    }
};
