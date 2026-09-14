class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart,
                                        int cStart) {
        vector<vector<int>> ans;
        vector<vector<int>> dire = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int r = rStart, c = cStart;
        int dir = 0;
        int step = 1; 
        while (ans.size() < rows * cols) {
            for (int i = 0; i < 2; ++i) {
                for (int s = 0; s < step; ++s) {
                    if (r >= 0 && r < rows && c >= 0 && c < cols)
                        ans.push_back({r, c});
                    r+=dire[dir][0];
                    c+=dire[dir][1];
                }
                dir = (dir + 1) % 4;
            }
            ++step;
        }
        return ans;
    }
};
