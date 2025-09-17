class Solution {
public:
bool check(int n){
    while(n>1){
        if(n%10==0){
            return false;
        }
        n/=10;
    }
    return true;
}
    vector<int> getNoZeroIntegers(int n) {
       for(int a=1;a<=n-1;a++){
       int b= n-a;
       if(check(a) && check(b)){
        return {a,b};
       }
       }
       return {-1,-1};
    }
};