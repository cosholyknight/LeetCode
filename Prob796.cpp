class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        for (int i = 0; i < s.size(); i++) {
            char c = s[0];
            s.erase(s.begin());
            s += c;
            if (s == goal) return true;
        }
        return false;
    }
};
