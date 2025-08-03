class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) return 1; 

        int ans = 10; 
        int prod = 9; 
        int available = 9;

        for(int i = 2; i <= n && available > 0; i++) {
            prod *= available;  
            ans += prod;       
            available--;        
        }
        return ans;
    }
};