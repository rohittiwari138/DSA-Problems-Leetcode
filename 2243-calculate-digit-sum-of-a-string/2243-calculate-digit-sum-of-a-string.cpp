class Solution {
public:
    string digitSum(string s, int k) {

        while (s.size() > k) {

            string temp = "";

            for (int i = 0; i < s.size(); i += k) {

                int sum = 0;

                // Ek group ka sum nikalo
                for (int j = i; j < min(i + k, (int)s.size()); j++) {
                    sum += s[j] - '0';
                }

                // Sum ko string bana ke append karo
                temp += to_string(sum);
            }

            s = temp;
        }

        return s;
    }
};