class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n);
        if (k > 0) {
            for (int j = 1; j <= k; ++j) {
                res[0] += code[j];
            }
            for (int i = 1; i < n; ++i) {
                res[i] = res[i-1]-code[i] + code[(i+k)%n];
            }
        } else if (k < 0) {
            for (int j = n-1; j > n-1+k; --j) {
                res[0] += code[j];
            }
            for (int i = 1; i < n; ++i) {
                res[i] = res[i-1]+code[i-1] - code[(n+i+k-1)%n];
            }
        }
        return res;
    }
};