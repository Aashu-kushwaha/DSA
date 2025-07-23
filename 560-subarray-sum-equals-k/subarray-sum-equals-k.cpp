class Solution {
public:
int count=0;
    int subarraySum(vector<int>& nums, int k) {
unordered_map<int, int> map;
      map[0]=1;
        int preSum=0, count=0;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];

            int remove = preSum-k;
            count+=map[remove];
            map[preSum]+=1;
        }
        return count;
    }
};