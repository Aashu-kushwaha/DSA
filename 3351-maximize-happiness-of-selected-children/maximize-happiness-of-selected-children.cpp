class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
       sort(happiness.begin(),happiness.end(),greater<int>());
       int n= happiness.size();
       long long sum=0;
       int count=0;
       if(k==1){
        return happiness[0];
       }
        
        for(int i=0;i<k;i++){
            sum += max(happiness[i] - count,0);
            count++;
          
       } 
       return sum;
    }
};