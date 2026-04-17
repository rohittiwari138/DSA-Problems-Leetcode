class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int n = nums.size();
        int bestend=nums[0];
        for(int i=1;i<=n-1;i++){
            int v1=nums[i]+bestend;
            int v2=nums[i];
            bestend=max(v1,v2);
            ans=max(ans,bestend);
        }
        return ans;
    }
};