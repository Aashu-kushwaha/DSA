class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>count(101);
        int maxfreq=0;
        for(int &num:nums){
            count[num]++;
            maxfreq=max(maxfreq,count[num]);
        }
        int total =0;
        for(int i=0;i<101;i++){
            if(count[i]==maxfreq){
                total+=maxfreq;
            }
        }
        return total;
    }
};