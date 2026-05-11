class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int officer=0;
        int cm=1;
        int res=1;
        while(cm<n){
            if(nums[cm]==nums[cm-1]){
            cm++;
            continue;
            }
            nums[officer+1]=nums[cm];
            cm++;
            officer++;
            res++;
        }
        return res;
    }
};