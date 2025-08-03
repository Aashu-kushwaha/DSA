class Solution {
public:int sum=0,count=0;
    int averageValue(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==0 && nums[i]%2==0){
             sum=sum+nums[i];
             count++;
            
            }
        }
      return count == 0 ? 0 : sum / count;
    }
};