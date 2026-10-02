class Solution {
public:
    string reverseParentheses(string s) {
      stack<int>st;
      string result;
      for(char &ch:s){
        if(ch=='('){
            st.push(result.size());
        }
        else  if(ch == ')'){
            int removeFromBegin = st.top();
            st.pop();
            reverse(result.begin()+removeFromBegin,result.end());
        }
        else{
            result.push_back(ch);
        }
      }  
      return result;
    }
};