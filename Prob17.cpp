class Solution {
public:
    void backTracking(unordered_map<char, string>& mp, vector<string>& ans, string& digits, int pos, string temp) {
        if (pos == digits.size()) {
            if (temp != "") ans.push_back(temp);
            return;
        }
        for (char c : mp[digits[pos]]) {
            temp.push_back(c);
            backTracking(mp, ans, digits, pos + 1, temp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        string temp = "";
        vector <string> ans;
        backTracking(mp, ans, digits, 0, temp);
        return ans;
    }
};
