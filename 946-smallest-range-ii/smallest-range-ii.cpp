class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int score = nums[n-1]-nums[0];

        for(int i=0;i<n-1;i++){
        int newmin= min(nums[0]+k,nums[i+1]-k);
        int newmax= max(nums[i]+k,nums[n-1]-k);
        score = min(score,newmax-newmin);
        }
        return score;
    }
};