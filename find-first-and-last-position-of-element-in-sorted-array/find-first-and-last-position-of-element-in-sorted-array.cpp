class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int b = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int u = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (u == b) {
            return {-1, -1};
        }
        return {b, u - 1};
    }
};