class Solution {
public:
    string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
        int cnt = 0;
        unordered_map<string, int> mp;
        for (int i = 0; i < words.size(); i++) {
            string trans = "";
            for (int j = 0; j < words[i].size(); j++) {
                trans += morse[words[i][j] - 'a'];
            }
            if (!mp.count(trans)) {
                mp[trans] = 1;
                cnt++;
            }
        }
        return cnt;
    }
};
