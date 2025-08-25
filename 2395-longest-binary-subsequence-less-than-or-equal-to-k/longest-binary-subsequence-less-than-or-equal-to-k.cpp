class Solution {
public:
    int longestSubsequence(string s, int k) {
       int length=0;
       long long val;
       long long bit;
       int n= s.length() ;
       for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            length++;
        }
        else{
           if (n - 1 - i >= 63) {
                    val = LLONG_MAX; // too big, will be skipped
                } else {
                    val = 1LL << (n - 1 - i);
                }
         if(val>k){
            
         }
         else{
         k= k - val;
         length++;
         }
        }
       }
       return length;
    }
};