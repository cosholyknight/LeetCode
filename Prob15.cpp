class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        if (nums.size() < 3) return ans;
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            if (nums[i] > 0) break;
            int low = i + 1, high = nums.size() - 1;
            while (low < high) {
                int curSum = nums[i] + nums[low] + nums[high];
                if (curSum > 0) high--;
                else if (curSum < 0) low++;
                else {
                    ans.push_back({nums[i], nums[low], nums[high]});
                    int highPos = high;
                    int lowPos = low;
                    while (low < high && nums[low] == nums[lowPos]) {
                        low++;
                    }
                    while (low < high && nums[high] == nums[highPos]) {
                        high--;
                    }
                }
            }
        }
        return ans;
    }
};
