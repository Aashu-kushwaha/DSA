class Solution {
public:
    bool Palindrome(string s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                return Palindrome(s, i + 1, j) || Palindrome(s, i, j - 1);
            }
            i++;
            j--;
        }

        return true;
    }
};