class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
      sort(nums.begin(),nums.end());  
      int n= nums.size();
      long long ans =-1;
      if(n<=2){
        return -1;
      }
      
       long long currSum=nums[0]+nums[1];
    for(int i=2;i<n;i++){
        if(currSum>nums[i]){
            ans=currSum+nums[i];
        }
            currSum=currSum+nums[i];
    }   
    return ans;
    }
};