class Solution {
public:
    int minOperations(vector<int>& nums) {
        int result=0;
        int n= nums.size();
       unordered_map<int,int>mp; 
       for(int i=0;i<n;i++){
        mp[nums[i]]++;
       }
       for(auto &it:mp){
        int freq=it.second;
        if(freq==1){
            return -1;
        }
        result+=ceil(double(freq)/3);
       }
       return result;
    }
};