class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                //check row and column
                if (board[i][j] == '.') continue;
                for (int k = 0; k < 9; k++)
                    if ((k != i && board[k][j] == board[i][j]) || (k != j && board[i][k] == board[i][j])) return false;
                int ibox = i - i % 3;
                int jbox = j - j % 3;
                for (int k = ibox; k < ibox + 3; k++) {
                    for (int l = jbox; l < jbox + 3; l++) {
                        if ((k != i || l != j) && board[k][l] == board[i][j]) return false;
                    }
                }
            }
        }
        return true;
    }
};
