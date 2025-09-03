class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
     sort(nums.begin(),nums.end());
    int n = nums.size(),count=0;
     for(int i =0;i<n-1;i++){
    while(nums[i]>= nums[i+1]){
        nums[i+1]++;
        count++;
        continue;
     }
     }   
     return count;
    }
};