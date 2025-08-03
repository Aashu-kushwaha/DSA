class Solution {
public:
    int mySqrt(int x) {
     long left=1,mid;
     long right=x;
     long long root;
     int ans=0;
     while(left<=right){
        mid=(left+right)/2;
        root=mid*mid;
     
    if(root>x){
        right=mid-1;
    }
    else if(root<x){
        left=mid+1;
        ans = mid;
    }
    else{
        return mid;
    }
    }
    return ans;
  }
};