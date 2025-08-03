class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digit;
        int sum=0,Sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            }
        for(int j=0;j<nums.size();j++){
            int n= nums[j];
           while(n>0){
           digit= n%10;
           Sum=Sum+digit;
          n=n/10;
            }
        }
        return sum-Sum;
    }
};