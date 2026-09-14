class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int fq[51]={};
        for(int x:nums){
            fq[x]++;
        }
        if(k==1){
            for(int x=50;x>=0;x--){
                if(fq[x]==1){
                    return x;
                }
            }
            return -1;
        }
        if(k==n){
            int ans=0;
            for(int x:nums){
                ans = max(ans,x);
            }
            return ans;
        }
        int ans=-1;
        if(fq[nums[0]]==1){
            ans=max(ans,nums[0]);
        }
        if(fq[nums[n-1]]==1){
            ans=max(ans,nums[n-1]);
        }
        return ans;
    }
};
