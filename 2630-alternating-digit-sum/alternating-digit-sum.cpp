class Solution {
public:
    int alternateDigitSum(int n) {
    int sum=0;
     int digit;
    string s = to_string(n);
    for(int i=0;i<s.size();i++){
         digit = s[i] - '0';
        if(i%2==1){
            sum=sum-digit;
        }
        else{
            sum=sum+digit;
        }
    }
        return sum;
    }
};