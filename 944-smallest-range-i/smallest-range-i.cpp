class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int newmin= nums[0]+k;
        int newmax= nums[(nums.size()-1)]-k;
        return max(0,newmax-newmin);
    }
};