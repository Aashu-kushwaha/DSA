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
    int idx=i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]){
        idx++;
    }
    getallSubsets(nums,newarr,idx,allsubsets);
    
 }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>allsubsets;
        vector<int>newarr;
        getallSubsets(nums,newarr,0,allsubsets);
        return allsubsets;
    }
};