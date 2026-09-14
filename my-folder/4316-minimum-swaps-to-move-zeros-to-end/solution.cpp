class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        int s = 0;
        int k = 0;
        for (int x : nums) {
            if (x == 0)
                k++;
        }
        int b = n - k;
        while (l < b && r >= b) {
            while (r >= b && nums[r] == 0) {
                r--;
            }
            while (l < b && nums[l] != 0) {
                l++;
            }
            if (l < b && r >= b) {
                s++;
                l++;
                r--;
            }
        }
        return s;
    }
};
