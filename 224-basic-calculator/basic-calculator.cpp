class Solution {
public:
    int calculate(string s) {
       stack<int>st;
       int num=0,result=0,sign=1,n=s.length(); 
       for(int i=0;i<n;i++){
        if(isdigit(s[i])){
         num=num*10+(s[i]-'0');
        }
        else if(s[i]=='+'){
         result+=num*sign;
         num=0;
         sign=1;
        }
        else if(s[i]=='-'){
          result+=num*sign;
         num=0;
         sign=-1;
        }
        else if(s[i]=='('){
         st.push(result);
         st.push(sign);
         result=0;
         sign=1;
        }
        else if(s[i]==')'){
          result+=(num*sign);
          num=0;
          int stack_sign= st.top(); st.pop();
          int last_result= st.top(); st.pop();

          result*=stack_sign;
          result+=last_result;
        }
       }
       result+=(num*sign);
       return result;
    }
};