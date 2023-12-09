class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] <= 'Z' && s[i] >= 'A') s[i] += 'a' - 'A';
        }
        return s;
    }
};
