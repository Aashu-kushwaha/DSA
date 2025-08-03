class Solution {
public:
   int maximumCount(vector<int>& nums) {
    int size =nums.size();
    int countP=0,countN=0;
     for(int i=0;i<size;i++){
        if(nums[i]<0){
           countN++; 
        }
        else if(nums[i]>0){
            countP++;
        }
    
     }
     return max(countP,countN);
    }
    };