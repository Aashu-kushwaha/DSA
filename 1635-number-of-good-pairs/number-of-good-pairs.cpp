class Solution {
public:
int count=0;
    int numIdenticalPairs(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums.size();j++){
              if(nums[i]==nums[j]&& i<j){
                count++;
              }
            }
        }
        return count;
    }
};