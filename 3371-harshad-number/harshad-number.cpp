class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int digit;
        int original=x;
        int sum = 0;
        while(x>0){
            digit= x%10;
            sum=sum+digit;
            x=x/10;
        }
        if(original%sum==0){
            return sum;
        }
        else
        return -1;
    }
};