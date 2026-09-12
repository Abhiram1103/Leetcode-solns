class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        vector<vector<int>> ans;
        helper(0, nums, ans);

        sort(ans.begin(), ans.end());
        return ans;
    }
    void helper(int idx, vector<int>& nums, vector<vector<int>>& ans) {

        if (idx == nums.size()) {
            ans.push_back(nums);
            return;
        }

        unordered_set<int> seen;

        for (int i = idx; i < nums.size(); i++) {

            if (seen.find(nums[i]) != seen.end())
                continue;
            seen.insert(nums[i]);
            swap(nums[idx], nums[i]);
            helper(idx + 1, nums, ans);
            swap(nums[idx], nums[i]);
        }
        return;
    }
};
