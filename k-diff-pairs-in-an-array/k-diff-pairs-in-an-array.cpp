class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0;
        if (k) {
            set<int> n;
            for (auto x : nums) {
                n.insert(x+k);
            }
            int last = 0;
            for (auto x : n) {
                bool ch = true;
                for (int i = last; i < nums.size(); ++i) {
                    if (nums[i] == x) {
                        last = i+1;
                        count ++;
                        ch = false;
                        break;
                    }
                    if (nums[i] > x) {
                        last = i;
                        ch = false;
                        break;
                    }
                }
                if (ch) break;
            }
        }
        else {
            bool ch = true;
            for (int i = 1; i < nums.size(); ++i) {
                if (nums[i] == nums[i-1]) {
                    if (ch) {
                        count++;
                        ch = false;
                    }
                } else ch = true;
            }
        }
        return count;
    }
};