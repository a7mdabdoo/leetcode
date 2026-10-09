class Solution {
public:
    int minInsertions(string s) {
        int ans = 0;
        int bal = 0;
        int i = 0;
        while (i < s.size()) {
            if (s[i] == '(') {
                bal++;
            } else {
                bal--;
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    i++;
                } else {
                    ans++;
                }
            }
            if (bal < 0) {
                ans++;
                bal++;
            }
            i++;
        }
        return ans + bal * 2;      
    }
};