class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) five++;
            if (bills[i] == 10) {
                if (five < 1) return false;
                else {
                    ten++;
                    five--;
                }
            }
            if (bills[i] == 20) {
                if (five < 1 || ten < 1 && five < 3) return false;
                else {
                    if (ten > 0) {
                        ten--;
                        five--;
                    }
                    else {
                        five -= 3;
                    }
                }
            }
        }
        return true;
    }
};
