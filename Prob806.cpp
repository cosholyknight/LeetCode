class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int line = 1, sumLine = 0;
        for (int i = 0; i < s.size(); i++) {
            if (sumLine + widths[s[i] - 'a'] <= 100) sumLine += widths[s[i] - 'a'];
            else {
                sumLine = widths[s[i] - 'a'];
                line++;
            }
        }
        vector <int> ans;
        ans.push_back(line);
        ans.push_back(sumLine);
        return ans;
    }
};
