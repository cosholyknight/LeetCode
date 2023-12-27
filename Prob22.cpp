class Solution {
public:
    void backTracking(int n, string temp, vector<string> &ans, int opCnt, int clCnt) {
        if (opCnt == n && clCnt == n) {
            ans.push_back(temp);
            return;
        }
        else {
            if (opCnt > clCnt) {
                temp.push_back(')');
                backTracking(n, temp, ans, opCnt, clCnt + 1);
                temp.pop_back();
            }
            if (opCnt < n) {
                temp.push_back('(');
                backTracking(n, temp, ans, opCnt + 1, clCnt);
                temp.pop_back();
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        string temp = "";
        vector<string> ans;
        backTracking(n, temp, ans, 0, 0);
        return ans;
    }
};
