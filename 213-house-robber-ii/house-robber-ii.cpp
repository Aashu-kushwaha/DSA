class Solution {
public:
    int rob(vector<int>& nums) {
     int n= nums.size();
     vector<int>house1;
     vector<int>house2;
     if(n==1) return nums[0];
     for(int i=0;i<n;i++){
        if(i!=0) house1.push_back(nums[i]);
        if(i!=n-1) house2.push_back(nums[i]);
     }
     return max(solve(house1),solve(house2));
    }
int solve(vector<int>&nums){
    int n=nums.size();
    int prev,pprev,curr;
    int flag=0;
    pprev=nums[0];
    if(n>1){
        flag=1;
        prev= max(nums[0],nums[1]);
        int rob=0,skip=0;
    for(int i=2;i<n;i++){
        rob=nums[i]+pprev;
        skip=prev;
        curr=max(rob,skip);
        pprev=prev;
        prev=curr;
    }
    }
    return flag==0?pprev:prev;
}
};