class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        for (int i = 0; i < s.size(); i++) {
            int pos = i;
            while(i < s.size() && s[i + 1] == s[i]) i++;
            if (i - pos >= 2) {
                ans.push_back({pos, i});
            }
        }
        return ans;
    }
};
