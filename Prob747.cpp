class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = -1, max2 = -1, pos = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max1) {
                max2 = max1;
                max1 = nums[i];
                pos = i;
            }
            else if (nums[i] > max2) max2 = nums[i];
        }
        if (max1 >= max2 * 2) return pos;
        else return -1;
    }
};
