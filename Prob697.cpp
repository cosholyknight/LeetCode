class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map <int,int> mp;
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            max = mp[nums[i]] > max ? mp[nums[i]] : max;
        }
        int min = 50001;
        for (int i = 0; i < nums.size(); i++) {
            if (mp[nums[i]] == max) {
                for (int j = nums.size() - 1; j >= i; j--) {
                    if (nums[j] == nums[i]) {
                        min = (j - i + 1) < min ? (j - i + 1) : min;
                        mp[nums[i]] = 0;
                        break;
                    }
                }
            }
        }
        return min;
    }
};
