class Solution {
private:
    void revArr(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++, end--;
        }
    }

public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        revArr(nums, 0, n - 1);
        revArr(nums, 0, k - 1);
        revArr(nums, k, n - 1);
    }
};
