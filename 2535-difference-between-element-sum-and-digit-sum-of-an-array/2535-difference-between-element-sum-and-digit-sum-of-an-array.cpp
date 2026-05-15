class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ElementSum = 0;
        int DigitSum=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
        ElementSum = ElementSum+nums[i];
            int num=nums[i];
            while(num>0){
                DigitSum +=num%10;
                num = num/10;

            }
        }
        return abs(ElementSum-DigitSum);

    }
};