class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if (typed.size() < name.size()) return false;
        if (name[0] != typed[0]) return false;
        int j = 1;
        int i = 1;
        while (i < name.size() && j < typed.size()) {
            if (name[i] == typed[j]) {
                i++;
                j++;
            }
            else {
                if (typed[j] != typed[j - 1]) return false;
                j++;
            }
        }
        for (j; j < typed.size() ; j++) if (typed[j] != typed[j - 1]) return false;
        return i >= name.size();
    }
};
