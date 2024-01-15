class Solution {
public:
    void helper(vector<vector<int>> &ans, vector<int> candidates, int target, vector<int> temp, int index) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = index; i < candidates.size(); i++) {
            if (target - candidates[i] >= 0) {
                temp.push_back(candidates[i]);
                helper(ans, candidates, target - candidates[i], temp, i);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans, candidates, target, temp, 0);
        return ans;
    }
};
