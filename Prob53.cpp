class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMax = 0, ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            curMax = max(nums[i], curMax + nums[i]);
            ans = max(ans, curMax);
        }
        return ans;
    }
};
