class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        for (int i = 0; i < 2 * n; i++) {
            if (i < n)
                ans[i] = nums[i];
            else
                ans[i] = nums[(2*n-1) - i];
        }
        return ans;
    }
};
