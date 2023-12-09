class Solution {
public:
    int countBinarySubstrings(string s) {
        int cnt1, cnt2, max1, max2, i, j;
        cnt1 = cnt2 = max1 = max2 = i = j = 0;
        bool flag = 0;
        while (i < s.size() && j <= s.size()) {
            if (s[j] != s[i]) {
                max1 = j - i;
                if (max2 != 0) {
                    if (!flag) {
                        cnt1 += min(max1, max2);
                        flag = 1;
                    }
                    else {
                        cnt2 += min(max1, max2);
                        flag = 0;
                    }
                }
                max2 = max1;
                i = j;
            }
            else {
                j++;
            }
        }
        return cnt1 + cnt2;
    }
};
