class Solution {
public:
    int calPoints(vector<string>& operations) {
        int a = 0;
        vector<int> score;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "D") score.push_back(2 * score[score.size() - 1]);
            else if (operations[i] == "+") score.push_back(score[score.size() - 2] + score[score.size() - 1]);
            else if (operations[i] == "C") score.pop_back();
            else score.push_back(atoi(operations[i].c_str()));
        }
        return accumulate(score.begin(), score.end(), 0);
    }
};
