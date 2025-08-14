class Solution {
public:
    bool isPerfectSquare(int num) {
        long long square,left=1,right=num,mid;
        while(left<=right){
        mid= left+(right-left)/2;
        square=mid*mid;
        if(num==square){
            return true;
        }
        else if(square<num){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
        }
        return false;
    }
};
