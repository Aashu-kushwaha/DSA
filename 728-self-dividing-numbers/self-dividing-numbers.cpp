class Solution {
public:
vector<int>ans;
    vector<int> selfDividingNumbers(int left, int right) {
        for(int i=left;i<=right;i++){
         int num=i;
         bool selfdivide = true;
            while(num>0){
                int digit = num%10;
                if(digit == 0 || i % digit != 0){
                 selfdivide =false;
                  break;
                }
                num=num/10;
            }
          if(selfdivide) ans.push_back(i);
        }
        return ans;
    }
};