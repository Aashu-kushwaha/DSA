class Solution {
public:
    int maxDistance(string s, int k) {
        int maxMd= 0;
        int east = 0;
        int south = 0;
        int north = 0;
        int west = 0;

        for(int i =0 ; i<s.length() ;i++){
            if(s[i]=='E') east++;
            if(s[i]=='W') west++;
            if(s[i]=='N') north++;
            if(s[i]=='S') south++;

            int currentMD = abs(east-west)+abs(north-south);
            int steps = i+1 ;
            int wasted = steps - currentMD ;

            int extra = 0; 
            if(wasted!=0){
                extra = min(2*k , wasted);
            } 
            int finalCurrentMd = currentMD + extra ;
            maxMd = max(finalCurrentMd , maxMd);
        }
        return maxMd ;
    }
};