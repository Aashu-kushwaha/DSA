class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
      vector<int>freeTime;
  
  freeTime.push_back(startTime[0]);
      for(int i =1;i<startTime.size();i++){
        freeTime.push_back(startTime[i]-endTime[i-1]);
      }  
        freeTime.push_back(eventTime- endTime[endTime.size()-1]);

    int i =0,j=0,maxSum=0,n=freeTime.size(),currSum=0;
    while(j<n){
        currSum+=freeTime[j];
       if(j - i> k){
            currSum-= freeTime[i];
            i++;
        }
        maxSum=max(maxSum,currSum);
        j++;
    }
    return maxSum;
    }
};