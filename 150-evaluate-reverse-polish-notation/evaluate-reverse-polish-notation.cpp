class Solution {
public:
// Lambda
    unordered_map<string, function<int(int, int)>> mp =
        {
            {"+", [](int a, int b) { return a + b;}},
            {"-", [](int a, int b) { return a - b ;}},
            {"*", [](int a, int b) { return (long)a * (long)b ;}},
            {"/", [](int a, int b) { return a / b ;}}
    };
    // int Operator(int a,int b,string tokens){
    //     if(tokens=="+"){
    //         return a+b;
    //     }
    //     if(tokens=="-"){
    //         return a-b;
    //     }
    //     if(tokens=="*"){
    //         return (long)a*(long)b;
    //     }
    //     if(tokens=="/"){
    //         return a/b;
    //     }
    //     return 0;
    // }
    int
    evalRPN(vector<string> & tokens) {
        stack<int> st;
        int a, b;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" ||
                tokens[i] == "/") {
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                // int ans = Operator(a,b,tokens[i]);
                int ans = mp[tokens[i]](a, b);
                st.push(ans);
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};