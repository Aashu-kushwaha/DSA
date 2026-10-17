class Solution {
public:

    string removeOccurrences(string s, string part) {
        string result;
        int n = part.size();
       for(char &ch :s){
        result.push_back(ch);
       
       if(result.length()>= n && result.substr(result.length()-n) == part){
        result.erase(result.length()-n);
       }
       }
        return result;
    }
};