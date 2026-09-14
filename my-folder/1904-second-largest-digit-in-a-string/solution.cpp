class Solution {
public:
    int secondHighest(string s) {
        vector<int> nums;
        for (char c : s) {
            if (isdigit(c))
                nums.push_back(c - '0');
        }
        int n = nums.size();
        if (n < 2)
            return -1;
        int l = INT_MIN;
        int sl = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (nums[i] > l) {
                sl = l;
                l = nums[i];
            } else if (nums[i] > sl && nums[i] != l) {
                sl = nums[i];
            }
        }
        return sl == INT_MIN ? -1 : sl;
    }
};
