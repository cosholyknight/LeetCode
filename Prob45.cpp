class Solution {
private:
public:
    int jump(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = max(nums[i] + i, nums[i - 1]);
        }
        int index = 0, ans = 0;
        while (index < nums.size() - 1) {
            index = nums[index];
            ans += 1;
        }
        return ans;
    }
};
