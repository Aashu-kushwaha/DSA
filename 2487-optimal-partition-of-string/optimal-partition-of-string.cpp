class Solution {
public:
    int partitionString(string s) {
        vector<int> lastseen(26,-1);
        int count=0;
        int n= s.length();
        int currSubStrStart=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(lastseen[ch-'a']>=currSubStrStart){
                count++;
                currSubStrStart=i;
            }
                lastseen[ch-'a']=i;
            }
        
        return count+1;
    }
};