class Solution {
public:
    bool winnerOfGame(string colors) {
        int countA=0,countB=0,n= colors.length();
        if(n<=2) return false;
       for(int i=1;i<n;i++){
        if(colors[i-1]=='A' && colors[i]=='A' && colors[i+1]=='A'){
            countA++;
        }
        else if(colors[i-1]=='B' && colors[i]=='B' && colors[i+1]=='B')
        countB++;
       }
       if(countA>countB){
        return true;
       }
       return false;
    }
};