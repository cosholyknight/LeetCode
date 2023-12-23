class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp;
        int cnt = 0;
        for (int i = 0; i < jewels.size(); i++) mp[jewels[i]]++;
        for (int i = 0; i < stones.size(); i++) {
            if (mp.count(stones[i])) cnt++;
        }
        return cnt;
    }
};
