class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(int i=0;i<n;i++){
            if(word[i]>='a' && word[i]<='z'){
            lower[word[i]-'a']=1;}
            else if(word[i]>='A'&& word[i]<='Z'){
                upper[word[i]-'A']=1;

            }
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(lower[i]&&upper[i]){
                count++;
            }
        }
        return count;
    }
};