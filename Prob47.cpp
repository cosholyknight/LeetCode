class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int> nums, vector<int> temp, vector<bool> flag) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1] && flag[i - 1]) continue;
            if (flag[i]) {
                temp.push_back(nums[i]);
                flag[i] = 0;
                helper(nums, temp, flag);
                flag[i] = 1;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<bool> flag(nums.size(), 1);
        vector<int> temp;
        sort(nums.begin(), nums.end());
        helper(nums, temp, flag);
        return ans;
    }
};
