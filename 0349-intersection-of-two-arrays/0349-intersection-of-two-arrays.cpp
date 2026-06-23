class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            bool found = false;

            // Check if nums1[i] exists in nums2
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    found = true;
                    break;
                }
            }

            // Check if already present in ans (to keep unique elements)
            bool alreadyPresent = false;
            for (int k = 0; k < ans.size(); k++) {
                if (ans[k] == nums1[i]) {
                    alreadyPresent = true;
                    break;
                }
            }

            if (found && !alreadyPresent) {
                ans.push_back(nums1[i]);
            }
        }

        return ans;
    }
};