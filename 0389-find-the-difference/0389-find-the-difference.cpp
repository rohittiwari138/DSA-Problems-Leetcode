class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        int m = t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        int j=0;
         while(i<n){
        if(s[i]==t[j]){
        i++;
        j++;
        }
        else{
            return t[j];
        }
       }
       return t[m-1];
    
    }
};