class Solution {
public:
    bool isValid(string s) {
        char c;
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            c = s[i];
            if (c == '(' or c == '{' or c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                if (c == ')' and st.top() != '(') return false;
                if (c == '}' and st.top() != '{') return false;
                if (c == ']' and st.top() != '[') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};