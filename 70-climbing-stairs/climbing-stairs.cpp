class Solution {
public:
int solve(int n,vector<int>& dp){
    
    if(n==1){
       dp[1] =1;
        return dp[1];
    }
    if(n==2){
        dp[2] = 2;
        return dp[2];
    }
    if(n==3){
        dp[3] = 3;
        return dp[3];
    }
    if(dp[n]!= -1){
        return dp[n];
    }
     dp[n] = (solve(n-1,dp)+solve(n-2,dp));
    return dp[n]; 
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int ans = (solve(n,dp));
        return ans;
    }
};