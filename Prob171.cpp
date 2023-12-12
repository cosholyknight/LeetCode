class Solution {
public:
    int titleToNumber(string columnTitle) {
        int mem = 1;
        int ans = 0;
        int i = columnTitle.size() - 1;
        while (i >= 0) {
            ans += mem * (int)(columnTitle[i] - 'A' + 1);
            if (i > 0) mem *= 26;
            i--;
        }
        return ans;
    }
};
