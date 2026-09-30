class Solution {
public:
    int maxDepth(std::string s) {
        int maxOpen = 0;
        int parentheses =0;
        for(char ch : s){
            if(ch == '('){
                parentheses++;
                maxOpen = max(maxOpen,parentheses);
            }
            else if(ch == ')'){
                parentheses--;
            }
        }
        return maxOpen;
    }
};