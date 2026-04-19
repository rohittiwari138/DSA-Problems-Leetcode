class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
      int n = nums.size();
      int bestendMax=nums[0];
      int maxsum=nums[0];

      int bestendmin=nums[0];
      int minsum=nums[0];

      for(int i=1;i<n;i++){
        int v1=nums[i];
        int v2=nums[i]+bestendMax;
        bestendMax=max(v1,v2);
        maxsum=max(bestendMax,maxsum);

        int v3=nums[i];
        int v4=nums[i]+bestendmin;
        bestendmin=min(v3,v4);
        minsum=min(bestendmin,minsum);
      }
      return max(abs(maxsum),abs(minsum));
    }
};