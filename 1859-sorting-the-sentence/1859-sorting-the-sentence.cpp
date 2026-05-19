class Solution {
public:
    string sortSentence(string s) {
        // words ko store karne ke liye
        vector<string> ans(10);
        string temp = "";
        int i = 0;
        int count = 0;
        // pura string traverse karenge
        while(i < s.size()) {
            // jab space mile
            if(s[i] == ' ') {
                // last character position hota hai
                int pos = temp[temp.size() - 1] - '0';
                // last digit hata do
                temp.pop_back();
                // correct position par word store karo
                ans[pos] = temp;
                // temp empty
                temp.clear();
                count++;
            }
            else {
                temp += s[i];
            }
            i++;
        }
        // last word process karna padega
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[pos] = temp;
        count++;
        // final answer banana
        string result = "";
        for(int i = 1; i <= count; i++) {
            result += ans[i];
            // last word ke baad space nahi
            if(i != count) {
                result += " ";
            }
        }
        return result;
    }
};