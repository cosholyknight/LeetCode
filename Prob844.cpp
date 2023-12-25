class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> temp1;
        stack <char> temp2;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '#') temp1.push(s[i]);
            else if (!temp1.empty()) temp1.pop();
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i] != '#') temp2.push(t[i]);
            else if (!temp2.empty()) temp2.pop();
        }
        if (temp1.size() != temp2.size()) return false;
        else {
            while (!temp1.empty()) {
                if (temp1.top() != temp2.top()) return false;
                temp1.pop();
                temp2.pop();
            }
        }
        return true;
    }
};
