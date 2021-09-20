class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> res;
        for(int n : nums) {
            res.insert(n);
        }
        int i = 0;
        for (auto it=res.begin(); it!=res.end(); it++) {
            nums[i++]=*it;
        }
        return i;
    }
};