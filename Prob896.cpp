class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size() == 1) return true;
        int i = 1;
        for (i; i < nums.size() && nums[i] == nums[i - 1]; i++);
        if (i == nums.size()) return true;
        int sign = nums[i] - nums[i - 1];
        for (int k = i + 1; k < nums.size(); k++)
            if ((long long)(nums[k] - nums[k - 1]) * sign < 0) return false;
        return true;
    }
};
