class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber > 0){
            if(columnNumber%26==0){
                ans.push_back(25+'A');
                columnNumber--;
            }
            else{
                ans.push_back(columnNumber%26+'A'-1);
            }
            columnNumber /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
