class Solution {
public:
    int value;
    int count=0;
    int numberOfSteps(int num) {
       while(num>0){
        if(num%2==0){
         num=num/2;
        }
         else{
            num=num-1;
         
        }
        count++;
       } 
       return count;
    }
};