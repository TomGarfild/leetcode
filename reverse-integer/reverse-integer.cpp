class Solution {
public:
    int reverse(int x) {
        bool minus = x < 0;
        x = abs(x);
        long long ans = 0;
        while(x) {
            ans = ans*10 + x%10;
            x/=10;
        }
        ans = ans * (minus ? -1 : 1);
        return ans > INT_MAX || ans < INT_MIN ? 0 : ans;
    }
};