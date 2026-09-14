class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int top = 0, left = 0;
        int right = n - 1;
        int bott = n - 1;
        int cnt = 1;
        while (top <= bott && left <= right) {
            for (int i = left; i <= right; ++i) {
                ans[top][i] = cnt++;
            }
            top++;
            for (int i = top; i <= bott; ++i) {
                ans[i][right] = cnt++;
            }
            right--;
            if (top <= bott) {
                for (int i = right; i >= left; --i) {
                    ans[bott][i] = cnt++;
                }
                bott--;
            }
            if (left <= right) {
                for (int i = bott; i >= top; --i) {
                    ans[i][left] = cnt++;
                }
                left++;
            }
        }
        return ans;
    }
};
