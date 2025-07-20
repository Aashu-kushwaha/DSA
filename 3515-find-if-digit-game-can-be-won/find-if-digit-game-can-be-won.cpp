class Solution {
public:
    bool canAliceWin(vector<int>& nums) {

        int Single_sum = 0;
        int Double_sum = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] / 10 == 0) {
                Single_sum = Single_sum + nums[i];
            } else {
                Double_sum += nums[i];
            }
        }
        if(Single_sum != Double_sum ) {
            return true;
            } else{
            return false;
            }
    }
};