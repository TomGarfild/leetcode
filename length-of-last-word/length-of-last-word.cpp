class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int ans = 0;
        bool end = false;
        for (auto c : s) {
            if (c == ' ' && end) {
                break;
            }
            if (c != ' ') {
                ans++;
                end = true;
            }
        }
        return ans;
    }
};