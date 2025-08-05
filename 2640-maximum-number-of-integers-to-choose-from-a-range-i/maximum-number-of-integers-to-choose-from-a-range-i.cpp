class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
      int sum=0,count=0;
      unordered_set<int>st(begin(banned),end(banned));
      for(int i=1;i<=n;i++){
        if(st.count(i)){
          continue;
        }
        if(sum+i<= maxSum){
            count++;
            sum+=i;
        }
       
      }
      return count;
    }
};