class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int> mp1;
        for (int i = 0; i < licensePlate.size(); i++) {
            if (isalpha(licensePlate[i])) mp1[tolower(licensePlate[i])]++;
        }
        string ans;
        ans.resize(1000);
        for (int i = 0; i < words.size(); i++) {
            unordered_map<char,int> mp2;
            for (int j = 0; j < words[i].size(); j++) mp2[words[i][j]]++;
            bool flag = 1;
            for (int i = 0; i < 'z' - 'a'; i++) {
                if (mp2[i + 'a'] < mp1[i + 'a']) {
                    flag = 0;
                    break;
                } 
            }
            if (flag) {
                if (words[i].size() < ans.size()) ans = words[i];
            }
        }
        return ans;
    }
};
