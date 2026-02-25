class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1,mid=0,res=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]>nums[n-1])
            low=mid+1;
            else{
                res=mid;
                high=mid-1;
            }
        }
        return nums[res];
    }
};