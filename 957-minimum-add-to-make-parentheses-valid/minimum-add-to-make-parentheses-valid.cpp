class Solution {
public:
    int minAddToMakeValid(string s) {
        int size=0,extra=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                size++;
            }
            else if(size>0){
                size--;
            }
            else{
                extra++;
            }
        }
        return size+extra;
        // stack<int> st;
        // int i = 0;
        // while (i < s.size()) {
        //     if(s[i] == '('){
        //         st.push(s[i]);
        //     }
        //     else if(!st.empty() && st.top() == '(') {
        //         st.pop();
        //     }
        //     else{
        //         st.push(s[i]);
        //     }
        //     i++;
        // }
        // return st.size();
    }
};