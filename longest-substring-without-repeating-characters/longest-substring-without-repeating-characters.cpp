class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> pos;
        int ans = 0;
        int curr = 0;
        for (int i = 0, n = s.size(); i < n; i++)
        {
            if (pos.count(s[i]))
            {
                ans = max(ans, curr);
                curr = min(curr+1, i - pos[s[i]]);
            }
            else
            {
                curr++;
            }
            pos[s[i]] = i;
        }
        return max(ans, curr);
    }
};