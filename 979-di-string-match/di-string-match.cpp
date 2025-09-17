class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n= s.size();
     vector<int>res(n+1,0);
  int low =0,high=n;
     for(int i=0;i<n;i++){
        if(s[i]=='I'){
            res[i]= low;
            low++;
        }
        else{
            res[i]=high;
            high--;
        }
     }   
     res[n]=low;
     return res;
    }
};