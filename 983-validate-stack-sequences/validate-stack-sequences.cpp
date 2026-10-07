class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i =0,j=0;
        int m = pushed.size();
        stack<int>st;
        while(i<m){
             st.push(pushed[i]);
            while(!st.empty() && j<m && popped[j]==st.top()){
                st.pop();
                j++;
            }
            i++;
        }
        return st.empty();
    }
};