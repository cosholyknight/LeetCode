class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        for (i; i < s.size(); i++) {
            if (s[i] == '+' || s[i] == '-' || isdigit(s[i])) break;
            if (isalpha(s[i]) || s[i] == '.') return 0;
        }
        int sign = 1;
        if (s[i] == '+') {
            sign = 1;
            i++;
        }
        else if (s[i] == '-') {
            sign = -1;
            i++;
        }
        if (i == s.size()) return 0;
        long ans = 0;
        while (isdigit(s[i])  && i < s.size()) {
            ans = ans * 10 + s[i] - '0';
            if (ans > INT_MAX) {
                if (sign == 1) return INT_MAX;
                else return INT_MIN;
            } 
            i++;
        }
        return sign * ans;

    }
};
