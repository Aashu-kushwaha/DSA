class Solution {
public:int sum1=0,sum2=0;
    int differenceOfSums(int n, int m) {
        for(int i=0;i<=n;i++){
       if(i%m!=0){
       sum1=sum1+i;
       }
       else{
        sum2=sum2+i;
       }
       } 
       return sum1-sum2;
    }
};