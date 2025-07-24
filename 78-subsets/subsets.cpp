class Solution {
public:
 void getallSubsets(vector<int>& nums,vector<int>& newarr,int i,        vector<vector<int>>& allsubsets){
    if(i==nums.size()){
    allsubsets.push_back({newarr});
        return;
    }
    newarr.push_back(nums[i]);
    getallSubsets(nums,newarr,i+1,allsubsets);

    newarr.pop_back();
    getallSubsets(nums,newarr,i+1,allsubsets);
 }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allsubsets;
        vector<int>newarr;
        getallSubsets(nums,newarr,0,allsubsets);
        return allsubsets;
    }
};