class Solution {
public:
    bool validPalindrome(string s) {
        if (s.size() <= 2) return true;
        int i = 0, j = s.size() - 1;
        int pos = -1;
        int flag = 0;
        while (i < j) {
            if (s[i] != s[j]) {
                if (flag == 0) {
                    pos = i;
                    flag++;
                    j--;
                }
                else if (flag == 1) {
                    i = pos + 1;
                    j = s.size() - pos - 1;
                    flag++;
                }
                else if (flag == 2) return false;
            }
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};
