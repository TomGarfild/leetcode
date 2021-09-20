class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int res = count(nums.begin(), nums.end(), val);
        int n = nums.size();
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if (nums[i] == val) swap(nums[i], nums[j]);
            }
        }
        return n - res;
    }
};