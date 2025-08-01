class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int i=0;
        int n= tokens.size();
        int j=n-1;
        int maxscore=0;
        int score=0;
        sort(tokens.begin(),tokens.end());
        while(i<=j){
            if(power>=tokens[i]){
               score++;
               power=power-tokens[i];
               i++;
               maxscore= max(score,maxscore);
            }
            else if(score>=1){
                power=power+tokens[j];
                score--;
                j--;
            }
            else{
                return maxscore;
            }
        }
        return maxscore;
    }
};