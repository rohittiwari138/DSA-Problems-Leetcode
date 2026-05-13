class Solution {
public:
       vector<vector<int>>result;
       void twosum(vector<int>& nums , int target , int i , int j){
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum>target)j--;
                else if(sum<target) i++;
             else{
                result.push_back({-target , nums[i], nums[j]});
                while(i<j&&nums[i]==nums[i+1]) i++;
                while(i<j&&nums[j]==nums[j-1]) j--;
                i++;
                j--;
            
            }
        }

       }


    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        if(n<3){
            return {};
        }
        result.clear();
        //sort
        sort(nums.begin(),nums.end());
        //fixing n1;
        for(int i = 0; i<nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1]){
                   continue;
            }
            int n1 = nums[i];
            int target = -n1;

            twosum(nums , target , i+1 , nums.size()-1);
        }
        return result;

        
    }
};