class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map <char, int> mp1;
        unordered_map <string, int> mp2;
        int i = 0, j = 0;
        while (i < pattern.size() && j < s.size()) {
            int pos = j;
            while (isalpha(s[j])) j++;
            if (mp1[pattern[i]] != mp2[s.substr(pos, j - pos)]) return false;
            mp1[pattern[i]] = mp2[s.substr(pos, j - pos)] = i + 1;
            i++;
            j++;
        }
        return (i == pattern.size() && j >= s.size());
    }
};
