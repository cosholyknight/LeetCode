class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;
        unordered_map <int, int> mp;
        int max = 0;
        int i = 0;
        while (i < s.size() && s[i] == goal[i]) {
            mp[s[i]]++;
            max = mp[s[i]] > max ? mp[s[i]] : max;
            i++;
        }
        cout << i << " - " << max;
        if (i == s.size()) return (max >= 2);
        if (i == s.size() - 1) return false;
        int j = i + 1;
        while (j < s.size() && s[j] == goal[j]) j++;
        if (j == s.size()) return false;
        swap(s[i], s[j]);
        return s == goal;
    }
};
