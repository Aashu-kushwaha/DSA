class Solution {
public:
    int addDigits(int num) {
        int digit;
        int sum=0;
        while(num>0){
            digit= num%10;
            sum = sum+digit;
            num = num/10;
        }
        if(sum<10){
            return sum;
        }
    else{}
     return  addDigits(sum);
    }
};