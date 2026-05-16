class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        string ans="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<ans.size();i++){
            bool found=false;
            for(int j=0;j<sentence.size();j++){
                if(ans[i]==sentence[j]){
                found=true;
                break;
                }
            }
            if(found==false)
            return false;
        }
        return true;
    }
};