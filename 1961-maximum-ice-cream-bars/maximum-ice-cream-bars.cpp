class Solution {
public:
int count=0;
    int maxIceCream(vector<int>& costs, int coins) {
       sort(costs.begin(),costs.end());
     for(int i=0;i<costs.size();i++){
       if(coins>=costs[i]){
        coins-=costs[i];
        count++;
       }
     } 
     return count;
    }
};