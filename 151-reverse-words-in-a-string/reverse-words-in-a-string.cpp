class Solution {
public:
    string reverseWords(string s) {
       istringstream iss(s);
    vector<string> words;
    string word;
    string result;
    while (iss >> word) {
        words.push_back(word);
    }
   reverse(words.begin(), words.end());

    for (int i = 0; i < words.size(); i++) {
        result+= words[i];
        if (i != words.size() - 1) result+= " ";
    }
        return result;
    }
};