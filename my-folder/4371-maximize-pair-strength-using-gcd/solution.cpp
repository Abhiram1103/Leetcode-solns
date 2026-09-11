class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long int ms = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                long long int a = nums[i];
                long long int b = nums[j];
                long long int g = gcd(a, b);
                long long int s = (a / g) * (b / g);
                ms = max(ms, s);
            }
        }

        return ms;
    }
};
