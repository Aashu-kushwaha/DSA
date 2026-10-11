class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string token ="";
        vector<string>vec;
        while(getline(ss,token,'/')){
            if(token == "" || token == "."){
                continue;
            }
            if(token!=".."){
                vec.push_back(token);
            }
            else{
                if(!vec.empty()){
                vec.pop_back();
                }
            }
        }
        if(vec.empty()){
            return "/";
        }
        string result = "";
        for(auto &token : vec){
            result+= "/" + token;
        }
        return result;
    }
};


// class Solution {
// public:
//     string simplifyPath(string path) {
//         stringstream ss(path);
//         string token ="";
//         stack<string>st;
//         while(getline(ss,token,'/')){
//             if(token == "" || token == "."){
//                 continue;
//             }
//             if(token!=".."){
//                 st.push(token);
//             }
//             else{
//                 if(!st.empty()){
//                 st.pop();
//                 }
//             }
//         }
//         if(st.empty()){
//             return "/";
//         }
//         string result = "";
//         while(!st.empty()){
//             result = "/" + st.top() + result;
//             st.pop();
//         }
//         return result;
//     }
// };