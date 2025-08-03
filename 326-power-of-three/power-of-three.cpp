class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i=0;i<20;i++){
            long long res = pow(3,i);
            if(res==n){
              return true;
            }
        }
      
      return false;
    }
};