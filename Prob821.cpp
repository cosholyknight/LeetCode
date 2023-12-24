class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector <int> dist;
        for (int i = 0; i < s.size(); i++) {
            int l = i, r = i;
            while (l >= 0 || r < s.size()) {
                if (l >= 0 && s[l] == c) {
                    dist.push_back(i - l);
                    break;
                }
                if (r < s.size() && s[r] == c) {
                    dist.push_back(r - i);
                    break;
                }
                l--;
                r++;
            }
        }
        return dist;
    }
};
