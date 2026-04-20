class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int total=0;
        int maxend=0;
        int maxsum=nums[0];
    
        int minend=0;
        int minsum=nums[0];

        for(int i=0;i<n;i++){
            int v1=nums[i];
            int v2=nums[i]+maxend;
            maxend=max(v1,v2);
            maxsum=max(maxsum,maxend);


            int v3=nums[i];
            int v4=nums[i]+minend;
            minend=min(v3,v4);
            minsum=min(minend,minsum);

            total=total+nums[i];

        }
        if(maxsum<0)
        return maxsum;
        
        return max(maxsum,total-minsum);
    }
};