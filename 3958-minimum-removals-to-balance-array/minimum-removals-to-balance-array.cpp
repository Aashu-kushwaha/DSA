class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int L=1;
        int maxEl = nums[n-1];
        int minEl = nums[0];
        int i=0,j=0;

        while(j<n){
            minEl = nums[i];
            maxEl = nums[j];
            while(i<j && maxEl> (long long)k*minEl){
                i++;
                minEl = nums[i];
            }
            L = max(L,j-i+1);
            j++;
        }       
        return n-L; 
    }
};