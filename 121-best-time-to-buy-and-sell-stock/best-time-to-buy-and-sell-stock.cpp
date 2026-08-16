class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int max_p = 0;
        int min_p = prices[0];

        for(int i =0;i<n;i++){
            int difference = prices[i]-min_p;
            max_p = max(difference,max_p);
            min_p = min(prices[i],min_p);  
        }
        return max(max_p,0);
    }
};