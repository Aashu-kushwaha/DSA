class Solution {
public:
    int minSwaps(string s) {
        // stack<int>st;
        int size=0;
       int  n = s.size();
       for(int i= 0;i<n;i++){
        if(s[i]=='['){
            size++;
        }
        else if(size>0){
                size--;
        }
       }
        return (size+1)/2;
    }
};