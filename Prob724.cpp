class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) sum += nums[i];
        int sum1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (sum1 == ((sum - nums[i]) / 2) && ((sum - nums[i]) % 2 == 0)) return i;
            cout << (sum - nums[i]) << " --- " << sum1 << "\n";
            sum1 += nums[i];
        }
        return -1;
    }
};
