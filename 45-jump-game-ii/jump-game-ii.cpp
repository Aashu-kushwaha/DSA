class Solution {
public:
    int jump(vector<int>& nums) {
        int left =0,right=0,step =0,maxnumber;
        while(right<nums.size()-1){
            maxnumber = 0;
            for(int i =left;i<=right;i++){
                maxnumber = max(maxnumber,nums[i]+i);
            }
            left = right+1;
            right = maxnumber;
            step++;
        }
        return step;
        
    }
};