class Solution {
public:
    string answerString(string word, int numFriends) {
        int n = word.size();
        string result;
        if(numFriends==1){
            return word;
        }
        int longestPossible = n - (numFriends - 1);
        for(int i = 0; i < n ; i++){
            int canTake = min(longestPossible,n-i);
            result = max(result , word.substr(i,canTake));
        } 
        return result;
    }
};