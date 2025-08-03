class Solution {
public:
    bool isHappy(int n) {
        while (1) {
            int sum = 0;
            while (n > 0) {
                int rem = n % 10;
                sum += rem * rem;
                n = n / 10;
            }

            if (sum == 1) {
                return true;
            }

            
            if (sum == 4) {
                return false;
            }

            n = sum; 
        }
    }
};