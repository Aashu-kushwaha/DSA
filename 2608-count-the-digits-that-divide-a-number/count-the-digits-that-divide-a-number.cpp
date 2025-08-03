class Solution {
public:
    int countDigits(int num) {
        int count=0,digit,sum=0;
        string s = to_string(num);
        for(int i;i<s.size();i++){
            digit = s[i] - '0'; 
            if(num%digit==0){
                count++;
            }
        }
        return count;
    }
};