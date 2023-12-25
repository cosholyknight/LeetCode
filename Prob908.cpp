class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max = nums[0], min = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            max = nums[i] > max ? nums[i] : max;
            min = nums[i] < min ? nums[i] : min;
        }
        if (max - min - 2 * k <= 0) return 0;
        else return max - min - 2 * k;
    }
};
