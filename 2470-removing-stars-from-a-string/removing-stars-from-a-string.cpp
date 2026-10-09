class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        stack<char>st;
        string ans;
        int i = 0;
        for (int i = 0; i < n; i++) {
            if (!st.empty() && s[i] == '*') {
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop(); 
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};