class Solution {
public:
    bool removeSenator(string &senate,char ch,int idx){
        bool checkLeftRemovalSide = false;
        while(true){
            if(idx==0){
                checkLeftRemovalSide = true;
            }
            if(senate[idx]==ch){
                senate.erase(senate.begin()+idx);
                break;
            }
            idx = (idx+1) % senate.length();
        }
        return checkLeftRemovalSide;
    }

    string predictPartyVictory(string senate) {
        int R = count(senate.begin(),senate.end(),'R'); 
        int D = senate.length() - R;
        int idx = 0;

        while(R > 0 && D > 0) {
            if(senate[idx] == 'R'){
                bool checkLeftRemovalSide = removeSenator(senate,'D',(idx+1)%senate.length());
                D--;
                if(checkLeftRemovalSide){
                    idx--;
                }
            } else { 
                bool checkLeftRemovalSide = removeSenator(senate,'R',(idx+1)%senate.length());
                R--;
                if(checkLeftRemovalSide){
                    idx--;
                }
            }
            idx = (idx+1) % senate.length(); 
        }
        return R==0 ? "Dire" : "Radiant";
    }
};
