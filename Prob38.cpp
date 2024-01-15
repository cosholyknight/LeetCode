class Solution {
public:
    string helper(string s) {
        int i = 0;
        string ans;
        while (i < s.size()) {
            int j = i;
            while(j < s.size() && s[j] == s[i]) j++;
            ans += to_string(j - i) + s[i];
            i = j;
        }
        return ans;
    }
    string countAndSay(int n) {
        string ans = "1";
        for (int i = 2; i <= n; i++) {
            ans = helper(ans);
        }
        return ans;
    }
};
