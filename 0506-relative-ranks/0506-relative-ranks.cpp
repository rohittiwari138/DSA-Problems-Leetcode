class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        int n = score.size();
        
        vector<int> temp = score;
        sort(temp.begin(), temp.end(), greater<int>());
        
        vector<string> ans(n);

        for(int i = 0; i < n; i++) {
            
            for(int j = 0; j < n; j++) {
                
                if(score[i] == temp[j]) {
                    
                    if(j == 0)
                        ans[i] = "Gold Medal";
                    
                    else if(j == 1)
                        ans[i] = "Silver Medal";
                    
                    else if(j == 2)
                        ans[i] = "Bronze Medal";
                    
                    else
                        ans[i] = to_string(j + 1);
                }
            }
        }

        return ans;
    }
};