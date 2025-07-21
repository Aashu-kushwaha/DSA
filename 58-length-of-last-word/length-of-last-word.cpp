class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int length=0;
        while(i>=0 && s[i]==' '){//remove space from starting
            i--;
        }
          while(i>=0 && s[i]!=' '){//cont the length of last word
            length++;
            i--;
          }
          return length;
    }
};