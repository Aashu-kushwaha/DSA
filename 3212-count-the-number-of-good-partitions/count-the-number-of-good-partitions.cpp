class Solution {
public:
    int numberOfGoodPartitions(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> last;
        for (int i = 0; i < n; i++) {
            last[nums[i]] = i;
        }
        int i = 0,result = 1;
        int j = last[nums[i]];
        int M = 1e9 + 7;
        while (i < n) {
            if(i>j){
            result = (result * 2) % M;
            }
            j = max(j, last[nums[i]]);
            i++;
        }
        return result;
    }
};