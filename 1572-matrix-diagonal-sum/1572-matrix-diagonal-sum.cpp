class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row= mat.size();
        int col= mat[0].size();
        int n = mat.size();
        int first=0,sec=0;
        for(int i=0;i<n;i++){
            first+=mat[i][i];
        }
        int i=0,j=n-1;
        while(j>=0){
            sec += mat[i][j];
            i++;
            j--;
        }
        int ans = first+sec;
         if(n%2==1){
            ans-=mat[n/2][n/2];
         }
         return ans;
        


    }
};