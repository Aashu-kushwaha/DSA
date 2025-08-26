class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
       long long parts=0,opr=0;
       int n= nums.size();
       for(int i = n-2;i>=0;i--){
         if(nums[i]<=nums[i+1]){
            continue;
         }
         
            parts = nums[i]/nums[i+1];
            if(nums[i]%nums[i+1]!=0){
                parts++;
            }
         opr += parts - 1;
         nums[i]= nums[i]/parts;
       }
       return opr;
    }
};