class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int M = 1e9+7;
        int n = nums.size();
        int l=0,r =n-1,result =0;
        vector<int>power(n);
        power[0] =1;
        for(int i =1 ;i<n;i++){
            power[i] = (power[i-1] * 2)%M;
        }
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            if(nums[l] + nums[r]<=target){
                int diff = r-l;
                result = result%M + power[diff] ;
                l++;
            }
            else{
                r--;
            }
        }
        return result;
    }
};