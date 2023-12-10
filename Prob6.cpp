class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string ans;
        for (int i = 0; i < numRows; i++) {
            if (i == 0 || i == numRows - 1) {
                int j = i;
                while (j < s.size()) {
                    ans += s[j];
                    j += 2 * numRows - 2;
                }
            }
            else {
                int flag = 1;
                int j = i;
                while (j < s.size()) {
                    ans += s[j];
                    if (flag) j += 2 * (numRows - i - 1);
                    else j += 2*i;
                    flag = (flag + 1) % 2;
                }
            }
        }
        return ans;
    }
};
