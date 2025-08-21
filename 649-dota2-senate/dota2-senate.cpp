class Solution {
public:
    string predictPartyVictory(string str) {
        queue<int> q1,q2;
        int n=str.size();
        for(int i=0;i<n;i++){
            if(str[i]=='R'){
                q2.push(i);
            }
            else q1.push(i);
        }
        while(!q1.empty() && !q2.empty()){
            int a=q1.front();
            int b=q2.front();
            if(a<b){
                q1.pop();
                q2.pop();
                q1.push(n);
                n++;
            }
            else {
                  q1.pop();
                q2.pop();
                q2.push(n);
                n++;
            }
        }
        if(q1.empty())return "Radiant";
        else return "Dire";
    }
};