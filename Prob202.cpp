class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> set;
        while (n != 1) {
            if (set.count(n)) return false;
            set.insert(n);
            int sum = 0;
            while (n > 0) {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            n = sum;
        }
        return true;
    }
};
