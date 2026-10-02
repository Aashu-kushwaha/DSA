class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        int l=0,r=0,maxi=0;
        for(char &ch : s){
            if(ch=='('){
                l++;
            }
            else{
                r++;
            }
            if(l==r){
                maxi =max(maxi,l+r);
            }
            if(r>l){
                l=0;
                r=0;
            }
        }
        l=0,r=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='('){
                l++;
            }
            else{
                r++;
            }
            if(l==r){
                maxi =max(maxi,l+r);
            }
            if(r<l){
                l=0;
                r=0;
            }
        }
        return maxi;
    }
};