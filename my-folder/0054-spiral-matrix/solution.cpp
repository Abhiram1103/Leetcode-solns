class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top=0,left=0;
        int n=matrix.size();
        int m = matrix[0].size();
        int right = m-1;
        int bott=n-1;
        while(top<=bott && left<=right){
            for(int i = left;i<=right;++i){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top;i<=bott;++i){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bott){
                for(int i = right;i>=left;--i){
                ans.push_back(matrix[bott][i]);
                }
                bott--;
            }
            if(left<=right){
                for(int i = bott;i>=top;--i){
                ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};
