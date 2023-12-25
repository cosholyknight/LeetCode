class Solution {
public:
    int binaryGap(int n) {
        int i = 0;
        int max = 0;
        int prev = -1;
        while (n > 0) {
            if (n & 1) {
                if (prev != -1) max = i - prev > max ? i - prev : max;
                prev = i;
            }
            n >>= 1;
            i++;
        }
        return max;
    }
};
