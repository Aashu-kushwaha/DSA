class Solution {
public:
    bool check(stack<char>& st, string part, int n) {
        stack<char> temp = st;
        for (int i = n - 1; i >= 0; i--) {
            if (temp.top() != part[i]) {
                return false;
            } else {
                temp.pop();
            }
        }
        return true;
    }
    string removeOccurrences(string s, string part) {
        string result;
        int m = s.size();
        int n = part.size();
        stack<char> st;
        for (int i = 0; i < m; i++) {
            st.push(s[i]);
            if (st.size() >= n && check(st, part, n) == true) {
                for (int j = 0; j < n; j++) {
                    st.pop();
                }
            }
        }
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};