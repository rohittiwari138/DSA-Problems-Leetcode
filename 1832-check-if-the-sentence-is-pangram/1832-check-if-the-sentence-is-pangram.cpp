class Solution {
public:
    bool checkIfPangram(string sentence) {
      int n = sentence.size();
      string ans = "abcdefghijklmnopqrstuvwxyz";
      for(int i =0; i<ans.size(); i++){
        bool Found = false;
        for(int j =0;j<sentence.size();j++){
            if(ans[i]==sentence[j]){
            Found = true;
            break;
            }
        }
      
      if(Found==false){
      return false;
      }
    } 
      return true;
    }
};